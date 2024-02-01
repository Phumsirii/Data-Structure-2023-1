#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
    int i=upper_bound(aux.begin(),aux.end(),index)-aux.begin();
    if (i>0 && i<aux.size(){
        auto it=mData[i].begin()+(index-aux[i-1]);
        for (auto&x:value){
            it=mData[i].insert(it,x);
            it++;
        }
    }
    else if (i<=0){
        auto it=mData[0].begin()+index;
        for (auto&x:value){
            it=mData[0].insert(it,x);
            it++;
        }
    }
    else{

    }
}

#endif
