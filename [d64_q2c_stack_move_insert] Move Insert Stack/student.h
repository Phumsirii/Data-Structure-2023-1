#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
    CP::stack<T> reserve,s3,reserve2;
    s3=*this;
    for (size_t i=0;i<k;i++){
        reserve2.push(s3.top());
        s3.pop();
    }
    size_t n;
    if (s2.mSize<m){
        n=s2.mSize;
    }
    else{
        n=m;
    }
    for (size_t i=0;i<n;i++){
        reserve2.push(s2.top());
        s2.pop();
    }
    while (!s3.empty()){
        reserve2.push(s3.top());
        s3.pop();
    }
    while (!reserve2.empty()){
        reserve.push(reserve2.top());
        reserve2.pop();
    }
    *this=reserve;
 }
#endif
