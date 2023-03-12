#include<iostream>
#include "logger.hpp"
using namespace std;

int main(){
    // 2 users trying to log
    // Logger* logger1 = new Logger(); // shows error as constructor is private
    // logger1->Log("This message is from user 1");

    // Logger* logger2 = new Logger();
    // logger2->Log("This message is from user 2");


    Logger* logger1 = Logger::getLogger();
    logger1->Log("This message is from user 1");

    Logger* logger2 = Logger::getLogger();
    logger2->Log("This message is from user 2");
    return 0;
}