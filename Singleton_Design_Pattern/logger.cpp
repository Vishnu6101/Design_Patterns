#include<iostream>
#include "logger.hpp"
using namespace std;

int Logger::ctr = 0; // initializing the counter as 0
Logger* Logger::loggerInstance = nullptr;

Logger::Logger(){
    ctr++; // incrementing the counter when the object is created
    cout << "New Instance created, No. of instances is " << ctr << endl;
}

void Logger::Log(string msg){
    cout << msg << endl;
}

Logger* Logger::getLogger(){
    // if not created then create one and return it
    if(loggerInstance == nullptr){
        loggerInstance = new Logger();
    }
    // if already created return the loggerInstance
    return loggerInstance;
}