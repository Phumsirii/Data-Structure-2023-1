#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
    for (auto &l:ls){
        l.begin().ptr->prev=mHeader->prev;
        mHeader->prev->next=l.begin().ptr;
        mHeader->prev=l.end().ptr->prev;
        l.end().ptr->prev->next=mHeader;
        mSize+=l.mSize;
        l.mHeader->prev=l.mHeader;
        l.mHeader->next=l.mHeader;
        l.mSize=0;
    }
}

#endif
