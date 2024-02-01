#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
    std::vector<T> res;
    CP::queue<T> r;
    r=*this;
    int n=0;
    while (!r.empty() && n<k){
        res.push_back(r.front());
        r.pop();
        n++;
    }
    return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
    int cap = 1;
    mData = new T[cap]();
    mCap = cap;
    mSize = 0;
    mFront = 0;
    auto it=from;
    while (it!=to){
        push(*it);
        it++;
    }
}

#endif
