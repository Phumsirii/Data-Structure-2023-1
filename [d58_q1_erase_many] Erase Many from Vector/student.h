#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    CP::vector<T> a;
    size_t n=0;
    for (size_t i=0;i<mSize;i++){
        if (n>=pos.size()){
            a.push_back(mData[i]);
            continue;
        }
        if (i!=pos[n]){
            a.push_back(mData[i]);
        }
        else{
            n++;
        }
    }
    *this=a;
}

#endif
