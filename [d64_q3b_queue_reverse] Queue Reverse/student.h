#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
    for (int i=0;i<(b+1-a)/2;i++){
        T t = mData[(mFront+a+i)%mCap];
        mData[(mFront+a+i)%mCap]=mData[(mFront+b-i)%mCap];
        mData[(mFront+b-i)%mCap]=t;
    }
}
#endif
