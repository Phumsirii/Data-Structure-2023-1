#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
    if (mSize==0) return (mHeader->next==mHeader && mHeader->prev==mHeader);
    node *e=mHeader->next;
    for (int i=0;i<mSize;i++){
        if (e==nullptr ||e->next==nullptr || e->prev==nullptr) return false;
        if (e==mHeader) return false;
        if (e->next->prev!=e || e->prev->next!=e) return false;
        e=e->next;
    }
    return e==mHeader;
}


#endif
