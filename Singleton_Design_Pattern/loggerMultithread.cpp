#include<iostream>
#include "loggerMultithread.hpp"
using namespace std;

int Logger::ctr = 0; // initializing the counter as 0
Logger* Logger::loggerInstance = nullptr;
mutex Logger::mtx;

Logger::Logger(){
    ctr++; // incrementing the counter when the object is created
    cout << "New Instance created, No. of instances is " << ctr << endl;
}

void Logger::Log(string msg){
    cout << msg << endl;
}

Logger* Logger::getLogger(){
    // Double Checking so that we need not lock it always
    if(loggerInstance == nullptr){
    
        mtx.lock(); // locking the resource
        // if not created then create one and return it
        if(loggerInstance == nullptr){
            loggerInstance = new Logger();
        }
        // if already created return the loggerInstance
        mtx.unlock(); // unlocking
    }
    return loggerInstance;

    // locks are really expensive so use double checking to put locks only once
    // the first time the logger instances was instantiated.
}