//
// Created by Eric Trantham on 11/20/21.
//

#ifndef ETRANTHA_HW4_TWITTER_H
#define ETRANTHA_HW4_TWITTER_H
#include <iostream>
#include "SocialMediaAccount.h"
using std::string;
using std::cout;
using std::endl;


template<class T>
class Twitter: public SocialMediaAccount<T> {
public:
    Twitter(): SocialMediaAccount<T>(){}
    Twitter(T newHandler): SocialMediaAccount<T>(newHandler){}
    Twitter(string username, int nUserID): SocialMediaAccount<T>(username, nUserID){}
    Twitter(T newHandler, bool nbool, int nfollowers, int nfollowed): retweetCount(0), SocialMediaAccount<T>(newHandler, nbool, nfollowers, nfollowed){}
    void setRetweetCount(int nRetweetCount){retweetCount = nRetweetCount;}
    int getRetweetCount(){return retweetCount;}
    void RT(){cout<<"You retweeted"<<endl;retweetCount++;}
    T displayRT();

protected:
    int retweetCount;

};

template<class T>
T Twitter<T>::displayRT() {
    cout<<retweetCount<<endl;
}


#endif //ETRANTHA_HW4_TWITTER_H
