#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>
#include <algorithm>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
    return std::find(mData,mData+mSize,k)!=mData+mSize;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
    if (!find(k)) return -1;
    int i=std::find(mData,mData+mSize,k)-mData;
    while(std::find(mData+i+1,mData+mSize,k)!=mData+mSize) i=std::find(mData+i+1,mData+mSize,k)-mData;
    return log2(i+1);
}

#endif

