#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
    if (pos==0){
      mData[(mFront+mSize)%mCap]=mData[mFront];
      mFront++;
      return ;
    }
    T b=mData[(mFront+pos)%mCap];
    for (size_t i=0;i!=mSize-pos-1;i++){
        mData[(mFront+pos+i)%mCap]=mData[(mFront+pos+i+1)%mCap];
    }
    mData[(mFront+mSize-1)%mCap]=b;
}

#endif
