//
// Created by Eric Trantham on 11/20/21.
//

#ifndef ETRANTHA_HW4_INSTAGRAM_H
#define ETRANTHA_HW4_INSTAGRAM_H
#include "SocialMediaAccount.h"
#include <iostream>

template<class T>
class Instagram: public SocialMediaAccount<T>{
public:
    Instagram(): SocialMediaAccount<T>(){}
    Instagram(T newHandler): SocialMediaAccount<T>(newHandler){}
    Instagram(string username, int nUserID): SocialMediaAccount<T>(username, nUserID){}
    Instagram(T newHandler, bool nbool, int nfollowers, int nfollowed): SocialMediaAccount<T>(newHandler, nbool, nfollowers, nfollowed){}
    void setLikeCount(int nlikeCount){likeCount = nlikeCount;}
    int getLikeCount(){return likeCount;}
    void Like(){likeCount++;}
    T displayLikes();

protected:
    int likeCount;
};

template<class T>
T Instagram<T>::displayLikes() {
    cout<<likeCount<<endl;
}


#endif //ETRANTHA_HW4_INSTAGRAM_H
