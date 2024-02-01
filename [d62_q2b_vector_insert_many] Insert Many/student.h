#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
    sort(data.begin(),data.end());
    CP::vector<T> a;
    size_t i=0; //for data
    size_t j=0; //for this
    for (size_t n=0;n<data.size()+mSize;n++){
        if (i<data.size() && n==data[i].first+i){
            a.push_back(data[i].second);
            i++;
        }
        else{
            a.push_back(mData[j]);
            j++;
        }
    }
    *this=a;
}

#endif
