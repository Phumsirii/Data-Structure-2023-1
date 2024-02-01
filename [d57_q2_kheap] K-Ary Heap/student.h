#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T temp=mData[idx];
    int p;
    while (idx>0 && !mLess(temp,mData[(idx-1)/4])){
        mData[idx]=mData[(idx-1)/4];
        idx=(idx-1)/4;
    }
    mData[idx]=temp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T temp=mData[idx];
    size_t c;
    while ((c=4*idx+1)<mSize){
        c=(c+3<mSize)?(std::max_element(mData+c,mData+c+4)-mData):(std::max_element(mData+c,mData+mSize)-mData);
        if (mLess(mData[c],temp)) break;
        mData[idx]=mData[c];
        idx=c;
    }
    mData[idx]=temp;
}

#endif

