#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include <cmath>
#include <algorithm>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
    std::vector<T> r;
    for (int i=0;i<pow(2,k);i++){
        if ((int)(pow(2,k)-1+i)>=mSize) break;
        r.push_back(mData[(int)(pow(2,k)-1+i)]);
    }
    std::sort(r.rbegin(),r.rend(),mLess);
    return r;
}

#endif

