#ifndef SUBSCRIBER_INTERFACE_HPP
#define SUBSCRIBER_INTERFACE_HPP

#include <iostream>
using namespace std;

// Interface to maintain a list of subscribers
class ISubscriber{
    public:
        virtual void notify(string msg) = 0;
        // all the subscribers must have to implement this notify function
        // users are subscribers
};

#endif