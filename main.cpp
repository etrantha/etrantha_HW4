/**********************************************************************
 * Author   : Eric Trantham
 * Program  :HW4
 * Date Created :  Nov 20
 * Date Last Modified :Nov 23
 * Problem: I'm lost as to why my contructors aren't working for Profile, I've tried so many things it's a bit of a mess now
 * For some reason my program seems to be ending in the first function Update:I don't know where I got the idea that the data
 * type for the display funtion needed to be T, I re-read the assignment and finally relized that wasn't the case and changed it to void.
 * . It's 11:50, I gotta hand something in. I'm going
 * to update my github though for what it's worth.
 */


#include <iostream>
#include "Twitter.h"
#include "Twitter.cpp"
#include "Instagram.h"
#include "Instagram.cpp"
#include "SocialMediaAccount.cpp" //this error wasted a lot of my time
#include "SocialMediaAccount.h"

using namespace std;

struct Profile{
    int userID;
    string username;
};

ostream & operator<<(ostream &obj, const Profile &c){obj<<c.userID<<" "<<c.username; return obj;}

int main() {
    std::cout << "Hello, World!" << std::endl;

    Twitter<string> TS("Jack", true, 1, 1), TS1("Harry");
    //Twitter<Profile> TP("Chappy", 03), TP2("SadPanda", 1);
    Instagram<string> IS("Nancy", false, 1, 0);
   // Instagram<Profile> IP("Riki", 02), IP1("Dusty", 4);

    Profile p1={03, "Groot"};

    TS.addFollower("Phil");
    TS.addFollower("Madison");
    TS.addFollower("Superman");
    TS.addFollower("Batman");
    TS.addFollower("Louis");
    TS.addFollower("Dr.Evil");
    TS.displayFollower();
    IS.addFollower("Hank");
    IS.addFollower("Bobby");
    IS.addFollower("Dale");
    IS.addFollower("Boomhower");
    IS.addFollower("Luann");
    IS.displayFollower();
    TS.addFollowed( "Aragorn");
    TS.addFollowed("Gandalf");
    TS.addFollowed("Lefolas");
    TS.addFollowed("Gollum");
    TS.addFollowed("Sauron");
    TS.displayFollowed();







    return 0;
}
