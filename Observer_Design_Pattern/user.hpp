#ifndef USER_HPP
#define USER_HPP

#include "Subscriber_Interface.hpp"

class User : public ISubscriber{
    private:
        int userID;

    public:
        User(int userID){
            this->userID = userID;
        }

        // implement the notify function
        void notify(string msg){
            cout << "User " << this->userID << " received " << msg << endl;
        }
};

#endif