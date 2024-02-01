#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    mCap=mSize;
    CP::vector<T> a(mSize);
    for (int i=0;i<mSize;i++){
        a[i]=(mData[i]);
    }
    std::swap(this->mData,a.mData);
}

#endif
