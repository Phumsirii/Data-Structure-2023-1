#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
    int n1=mSize/k+1; // size of larger one
    int n2=mSize%k; //no of queue with larger size
    int n3=k-n2;  //no of queue with smaller size
    output = std::vector<std::queue<T>>(k);
    for (int e=0;e<n2;++e){
        std::queue<T> tmp;
        for (int i=0;i<n1;++i){
            tmp.push(mData[(mFront+e*n1+i)%mCap]);
        }
        output[e]=tmp;
    }
    --n1; // now smaller one
    for (int e=n2;e<k;++e){
        std::queue<T> tmp;
        for (int i=0;i<n1;++i){
            tmp.push(mData[(mFront+(n1+1)*n2+(e-n2)*n1+i)%mCap]);
        }
        output[e]=tmp;
    }
}

#endif
