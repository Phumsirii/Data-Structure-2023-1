#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure

#include <map>

template <typename T>
void CP::vector<T>::uniq() {
    CP::vector<T> a;
    std::map<T,int> m;
    for (auto&x:*this){
        if (m[x]==0){
            m[x]=1;
            a.push_back(x);
        }
    }
    *this=a;
}

#endif
