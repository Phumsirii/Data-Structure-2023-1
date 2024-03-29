#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
    int i=std::upper_bound(aux.begin(),aux.end(),idx)-aux.begin();
    if (i>0){
        return mData[i][idx-aux[i-1]];
    }
    return mData[0][idx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
    aux.push_back(mCap);
}

#endif
