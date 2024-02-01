#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
    if (mSize>other.mSize){
        for (size_t i=0;i<mSize;i++){
            if (i==other.mSize){
                return false;
            }
            if (mData[i]!=other.mData[i]){
                return mData[i]<other.mData[i];
            }
        }
    }
    else if (mSize<other.mSize){
        for (size_t i=0;i<other.mSize;i++){
            if (i==mSize){
                return true;
            }
            if (mData[i]!=other.mData[i]){
                return mData[i]<other.mData[i];
            }
        }
    }
    else{
        for (size_t i=0;i<other.mSize;i++){
            if (mData[i]!=other.mData[i]){
                return mData[i]<other.mData[i];
            }
        }
        return false;
    }
}

#endif
