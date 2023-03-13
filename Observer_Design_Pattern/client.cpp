#include "Group.hpp"
#include "user.hpp"

#include <iostream>
using namespace std;

int main(){
    // new group (publisher)
    Group* group = new Group();

    // users
    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);

    // subcribing the users to group
    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    // notifying all users
    group->notify("new MSG");

    // unsubscribe a user
    group->unsubscribe(user3);

    // notifying again
    group->notify("new MSG2");
}