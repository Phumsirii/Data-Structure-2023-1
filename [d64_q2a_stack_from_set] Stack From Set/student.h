#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
    mData = new T[1]();
    mCap = 1;
    mSize = 0;
    auto it = last;
    if (it!=first && first!=it--){
        for (it;it!=first;it--){
            push(*it);
        }
        push(*first);
    }
}

#endif
