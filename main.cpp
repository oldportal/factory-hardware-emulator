#include "factory-hardware-emulator/factory-hardware-emulator.h"

// command line argument parser
#include <boost/program_options.hpp>
#include <boost/program_options/cmdline.hpp>

#include <log4cxx/logstring.h>
#include <log4cxx/basicconfigurator.h>
#include <log4cxx/helpers/exception.h>
#include <log4cxx/ndc.h>

using namespace log4cxx;
using namespace log4cxx::helpers;

// Global EmulatorApplication object
std::shared_ptr<oldportal::fhe::EmulatorApplication> application;

static void close_signal(int dummy)
{
    application->_network->close();

    exit(dummy);
}

int main(int argc, char *argv[])
{
    // command line parser

    boost::program_options::options_description desc("General options");
    desc.add_options()
    ("help,h", "produce help message")
    ("version", "print program version")
    ("config,c", boost::program_options::value<std::string>(), "initialize with configuration file")
    ;

    // without unnamed parameters
    //boost::program_options::variables_map vm;
    //boost::program_options::store(boost::program_options::parse_command_line(argc, argv, desc), vm);
    //boost::program_options::notify(vm);

    // with unnamed parameters
    boost::program_options::positional_options_description p;
    p.add("project", -1);

    boost::program_options::variables_map vm;
    boost::program_options::store(boost::program_options::command_line_parser(argc, argv).
              options(desc).positional(p).run(), vm);
    boost::program_options::notify(vm);


    // print general program description
    std::cout << "factory-hardware-emulator" << std::endl;

    if (vm.count("help"))
    {
        std::cout << desc << std::endl;
        return 1;
    }
    if (vm.count("version"))
    {
        std::cout << "version 0.1 alpha" << std::endl;
        return 1;
    }

    // init log
    BasicConfigurator::configure();
    LoggerPtr rootLogger = Logger::getRootLogger();
    LOG4CXX_INFO(rootLogger, "factory hardware emulator start");


    // init factory
    if (vm.count("config"))
    {
        // file configuration loader

        std::string config_filename = vm["config"].as<std::string>();
        std::cout << "Initialize with configuration file: " << config_filename << std::endl;

        application = std::make_shared<oldportal::fhe::EmulatorApplication>();

        // init loader
        //auto loader = std::make_shared<oldportal::fc::factory::manufacturing::proc::FactoryConfigurationFileLoader>(config_filename);
        //loader->init();
        //factory = std::make_shared<oldportal::fc::factory::manufacturing::Factory>
        //        (std::static_pointer_cast<oldportal::fc::factory::manufacturing::FactoryLoader>(loader));
        // free loader
        //loader.reset();

        //TODO: load application configuration

        application->_network->init();

        // set exit signal cutch before enter main cylce
        signal(SIGTERM, close_signal);

        application->_network->run();
    }
    else
    {
        // pure program loader (default)

        std::cout << "Initialize with default configuration" << std::endl;

        application = std::make_shared<oldportal::fhe::EmulatorApplication>();
        application->_network = std::make_shared<oldportal::fhe::network::ModbusNetworkController>(application);
        std::shared_ptr<oldportal::fhe::device::Device> device = std::make_shared<oldportal::fhe::hardware::mechatronics::StepMotor>();
        application->_devices.push_back(device);

        application->_network->init();

        // set exit signal cutch before enter main cylce
        signal(SIGTERM, close_signal);

        application->_network->run();
    }
}
