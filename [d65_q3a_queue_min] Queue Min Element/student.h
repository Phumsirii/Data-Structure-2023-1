#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
    T mi=mData[(mFront+*std::min_element(pos.begin(),pos.end()))%mCap];
    for (auto&x:pos){
        if (x<mSize && comp(mData[(mFront+x)%mCap],mi)){
            mi=mData[(mFront+x)%mCap];
        }
    }
    return mi;
}

#endif
