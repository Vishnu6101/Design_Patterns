#ifndef logger_h
#define logger_h

#include<string>
#include<mutex>
using namespace std;

class Logger{

    static int ctr; // to count the number of instances created
    static Logger* loggerInstance; // static instance of the class that will be used by all the users
    static mutex mtx; // creating a mutex lock
    Logger(); // making the constructor private (restricting users to access the constructor)

    // Copy constructor and operator overloading problem

    // making the copy constructor private
    Logger(const Logger&);
    // making the = operator opverloading private
    Logger operator=(const Logger&);

    public:
        // Logger(); // constructor
        // A static function that creates a logger instance and return that
        static Logger* getLogger();
        void Log(string msg); // function to log the message
};

#endif