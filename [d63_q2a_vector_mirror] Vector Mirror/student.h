#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <stack>

template <typename T>
void CP::vector<T>::mirror() {
    if (mSize==0){
        return;
    }
    size_t n=mSize;
    T*ne=new T[n*2];
    int i=0;
    std::stack<T> s;
    for (auto&x:*this){
        s.push(x);
        ne[i]=x;
        i++;
    }
    for (int e=n;e<2*n;e++){
        ne[e]=s.top();
        s.pop();
    }
    delete[] mData;
    mData=ne;
    mSize=2*n;
    mCap=mSize;
}

#endif
