#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
    if (mSize==0 || a==b) return;
    while (a!=b){
        if (a.ptr->data==value){
            node *n = new node(value,output.mHeader,output.mHeader->next);
            output.mHeader->next->prev=n;
            output.mHeader->next=n;
            output.mSize++;
            iterator temp(a.ptr->next);
            a.ptr->prev->next = a.ptr->next;
            a.ptr->next->prev = a.ptr->prev;
            delete a.ptr;
            mSize--;
            a=temp;
        }
        else a++;
    }
}

#endif
