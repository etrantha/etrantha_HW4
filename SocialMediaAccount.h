//
// Created by Eric Trantham on 11/20/21.
//

#ifndef ETRANTHA_HW4_SOCIALMEDIAACCOUNT_H
#define ETRANTHA_HW4_SOCIALMEDIAACCOUNT_H
#include <iostream>
using namespace std;

const int maxFollowers(5);
const int maxFollowed(5);

template<class T>
class SocialMediaAccount {
public:
    SocialMediaAccount():handler("Fred"), privacy(true), followerCount(0),followedCount(0){}
    SocialMediaAccount(T newHandler):handler(newHandler), privacy(true), followedCount(0), followerCount(1){}
    SocialMediaAccount(string username, int nUserID):handler(username), userID(nUserID){}
    SocialMediaAccount(T newHandler, bool nbool, int nFollowerCount, int nFollowedCount):privacy(nbool), handler(newHandler), followerCount(nFollowerCount), followedCount(nFollowedCount){}
    void setHandler(T newHandler){handler = newHandler;}
    T getHandler(){return handler;}
    bool getPrivacy(){return privacy;}
    void setPrivacy(bool nbool){privacy = nbool;}
    int getFollowerCount(){return followerCount;}
    int getFollowedCount(){return followedCount;}
    void setFollowerCount( int nFollowerCount){followerCount = nFollowerCount;}
    void setFollowedCount( int nFollowedCount){followedCount = nFollowedCount;}
    void addFollower(T user);
    void addFollowed(T user);
    T displayFollower();
    T displayFollowed();


protected:
    T handler; //Account owner
    T followers[maxFollowers];
    T followed[maxFollowed];
    int followerCount, followedCount, userID;
    bool privacy;

};



#endif //ETRANTHA_HW4_SOCIALMEDIAACCOUNT_H
