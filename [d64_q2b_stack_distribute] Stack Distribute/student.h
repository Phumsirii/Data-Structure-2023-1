#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    int n1=mSize%k;
    int n2=mSize/k+1;
    CP::stack<T> s=*this;
    std::vector<T> v1;
    std::vector<std::vector<T>> result;
    for (int i=0;i<n1;i++){
        v1={};
        for (int e=0;e<n2;e++){
            v1.push_back(s.top());
            s.pop();
        }
        result.push_back(v1);
    }
    n2--;
    while (!s.empty()){
        v1={};
        for (int e=0;e<n2;e++){
            v1.push_back(s.top());
            s.pop();
        }
        result.push_back(v1);
    }
    return result;
}
#endif
