#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    CP::stack<T> reserve;
    for (int i=0;i<a;i++){
        reserve.push(top());
        pop();
    }
    for (int i=a;i<=b;i++){
        reserve.push(top());
        reserve.push(top());
        pop();
    }
    while (!reserve.empty()){
        push(reserve.top());
        reserve.pop();
    }
}

#endif
