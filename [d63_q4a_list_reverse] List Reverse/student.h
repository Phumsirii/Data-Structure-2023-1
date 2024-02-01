#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    if (a==b) return a;
    iterator temp=a;
    b--;
    while (a!=b && a.ptr->prev!=b.ptr && b.ptr->next!=a.ptr){
        std::swap(*a,*b);
        a++;
        b--;
    }
    return temp;
}

#endif
