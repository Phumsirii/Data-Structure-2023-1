#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
    size_t n=last-first;
    CP::vector<T> a;
    CP::vector<T>::iterator it=this->mData;
    while (it!=position){
        a.push_back(*it);
        it++;
    }
    for (size_t i=0;i<n;i++){
        a.push_back(*(first+i));
    }
    while  (it!=this->end()){
        a.push_back(*it);;
        it++;
    }
    *this=a;
}

#endif
