#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
    std::vector<std::vector<T>> result(k);
    int pointer=(mSize%k+k-1)%k;
    for (int i=0;i<mSize;i++){
        result[pointer].push_back(mData[i]);
        pointer=(pointer-1+k)%k;
    }
    return result;
}

#endif

