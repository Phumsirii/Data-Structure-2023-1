#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
    if (idx<0){
        idx%=mCap;
        idx+=mSize;
    }
    else{
        idx%=mCap;
    }
    return mData[(mFront+idx)%mCap];
}

#endif
