#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
    int tmp=mSize;
    node *i=mHeader->next;
    while (tmp--){
        if (i->data==value){
            node *tmp=i;
            i=i->next;
            tmp->prev->next=tmp->next;
            tmp->next->prev=tmp->prev;
            delete tmp;
            --mSize;
        }
        else i=i->next;
    }
}

#endif
