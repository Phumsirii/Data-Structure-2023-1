#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include<algorithm>
template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
    T *arr=new T[mCap];
    std::sort(ranges.begin(),ranges.end());
    int i=0;
    auto p=begin();
    for (auto&x:ranges){
        while (p<x.first){
            arr[i]=*p;
            i++;
            p++;
        }
        if (p<x.second) p=x.second;
    }
    while (p!=end()){
        arr[i]=*p;
        i++;
        p++;
    }
    delete[] mData;
    mData=arr;
    mSize=i;
}

#endif
