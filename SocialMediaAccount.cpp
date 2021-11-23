//
// Created by Eric Trantham on 11/20/21.
//

#include "SocialMediaAccount.h"
#include <iostream>
using std::cout;
using std::endl;


template<class T>
void SocialMediaAccount<T>::addFollower(T user) {
    followers[followerCount] = user;
    followerCount++;
}

template<class T>
void SocialMediaAccount<T>::addFollowed(T user) {
    followed[followedCount] = user;
    followedCount++;
}

template<class T>
T SocialMediaAccount<T>::displayFollower() {
    if(privacy == false)
        cout<<"account is protected and we can't see the requested information"<<endl;
    else{
        cout<<"Followers: "<<endl;
        for (int i; i < maxFollowers; i++)
            cout<<followers[i]<<endl;}
    return nullptr;

}

template<class T>
T SocialMediaAccount<T>::displayFollowed() {
    if(privacy == false)
        cout<<"account is protected and we can't see the requested information"<<endl;
    else{
        cout<<"AccountHandler: "<<endl;
        for (int i; i < maxFollowed; i++)
            cout<<followed[i]<<endl;}
    return nullptr;
}


