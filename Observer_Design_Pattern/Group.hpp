#ifndef GROUP_HPP
#define GROUP_HPP

#include "Subscriber_Interface.hpp"
#include <list>

/// Publisher Class
class Group{
    private:
        list<ISubscriber* > users;
    
    public:
        // subscribe(), unsubscribe(), notify()

        // subscribe()
        void subscribe(ISubscriber* user){
            users.push_back(user);
        }

        // unsubscribe()
        void unsubscribe(ISubscriber* user){
            users.remove(user);
        }

        // notify()
        void notify(string msg){
            // send notfication for all the users
            for(auto user : users){
                user->notify(msg);
            }
        }  
};

#endif