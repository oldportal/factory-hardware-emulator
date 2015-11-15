/*
*    factory-hardware-emulator - modbus network over TCP emulator console application. 
*    
*    This app is test emulation tool for factorycontroller. 
* 
*    This file is part of factorycontroller.
*    
*    factorycontroller is free software; you can redistribute it and/or modify
*    it under the terms of the GNU Lesser General Public License as published by
*    the Free Software Foundation; either version 2 of the License, or
*    (at your option) any later version.
*    
*    factorycontroller is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU Lesser General Public License for more details.
*    
*    You should have received a copy of the GNU Lesser General Public License
*    along with factorycontroller; if not, write to the Free Software
*    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*    
*    Copyright (C) Dmitry Ognyannikov, 2012-2015
*/

#include "factory-hardware-emulator/factory-hardware-emulator.h"

// command line argument parser
#include <boost/program_options.hpp>
#include <boost/program_options/cmdline.hpp>

#include <log4cxx/logstring.h>
#include <log4cxx/basicconfigurator.h>
#include <log4cxx/helpers/exception.h>
#include <log4cxx/ndc.h>

// Global EmulatorApplication object
std::shared_ptr<oldportal::fhe::EmulatorApplication> application;

static void close_signal(int dummy)
{
    application->_network->close();

    exit(dummy);
}

void init_logging()
{
    // BasicConfigurator replaced with PropertyConfigurator.
    //PropertyConfigurator::configure("log4cxx.properties");

    log4cxx::BasicConfigurator::configure();
    //log4cxx::LoggerPtr logger = log4cxx::Logger::getRootLogger();
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

    // init log
    init_logging();

    // print general program description
//    std::cout << "factory-hardware-emulator - modbus network over TCP emulator console application" << std::endl;
//    std::cout << "This app is test emulation tool for factorycontroller." << std::endl;
//    std::cout << "Copyright (C) Dmitry Ognyannikov, 2012-2015" << std::endl;
    LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), "factory-hardware-emulator - modbus network over TCP emulator console application");
    LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), "This app is test emulation tool for factorycontroller");
    LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), "Copyright (C) Dmitry Ognyannikov, 2012-2015");

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

    LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), "factory hardware emulator start");

    // init factory
    if (vm.count("config"))
    {
        // file configuration loader

        std::string config_filename = vm["config"].as<std::string>();
        //std::cout << "Initialize with configuration file: " << config_filename << std::endl;
        LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), std::string("Initialize with configuration file: ") + config_filename);

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

        // set exit signal cutch before enter main cycle
        signal(SIGTERM, close_signal);

        application->_network->run();
    }
    else
    {
        // pure program loader (default)
        
        //std::cout << "Initialize with default configuration" << std::endl;
        LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), "Initialize with default configuration (pure program loader)");

        application = std::make_shared<oldportal::fhe::EmulatorApplication>();
        application->_network = std::make_shared<oldportal::fhe::network::ModbusNetworkController>(application);
        std::shared_ptr<oldportal::fhe::device::Device> device = std::make_shared<oldportal::fhe::hardware::mechatronics::StepMotor>();
        device->_modbus_address = 18;
        application->_devices.push_back(device);
        LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), "StepMotor device added, modbus_address: ");
        
        application->_network->init();

        // set exit signal cutch before enter main cycle
        signal(SIGTERM, close_signal);

        application->_network->run();
    }
}
