#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>

template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
    std::vector<T> tmp(pos.size());
    size_t i=0,e=0;
    for (auto&x:pos){
        tmp[i]=*x;
        ++i;
    }
    std::sort(tmp.begin(),tmp.end(),comp);
    std::sort(pos.begin(),pos.end());
    for (auto&it:pos){
        *it=tmp[e];
        ++e;
    }
}

#endif
