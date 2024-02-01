#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
    return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
    return v[v.size()-1];
}

template <typename T>
void CP::stack<T>::push(const T& element) {
    v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
    v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
    if (depth>=v.size()){
        depth=v.size();
    }
    v.insert(v.end()-depth,element);
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
    for (auto&x:w){
        v.push_back(x);
    }
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
    while ((v.size()!=0)&&(v[v.size()-1]!=e)){
        v.pop_back();
    }
}

#endif

