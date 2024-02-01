#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
    if (k==1) return mData[0];
    if (k==2) return (mLess(mData[1],mData[2]))?mData[2]:mData[1];
    if (k==3){
        Comp comp=mLess;
        if (mLess(mData[2],mData[1])) return *std::max_element(mData+2,mData+7,comp);
        T temp=*std::max_element(mData+3,mData+7,comp);
        return mLess(temp,mData[1])?mData[1]:temp;
    }
}

#endif
