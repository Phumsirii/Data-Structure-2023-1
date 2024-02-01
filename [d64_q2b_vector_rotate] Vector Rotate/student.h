#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <queue>

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    std::queue<T> q;
    auto it=last;
    it--;
    for (int i=0;i<k;i++){
        q.push(*it);
        it--;
    }
    auto termi=first;
    termi--;
    for (it;it!=termi;it--){
        q.push(*it);
        *it=q.front();
        q.pop();
    }
    it=last;
    it--;
    for (int i=0;i<k;i++){
        *it=q.front();
        q.pop();
        it--;
    }
}

#endif
