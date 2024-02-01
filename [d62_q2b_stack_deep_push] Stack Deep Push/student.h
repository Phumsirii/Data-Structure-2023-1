#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
    CP::stack<T> temp;
    for (size_t i=0;i<pos;i++){
        temp.push(top());
        pop();
    }
    push(value);
    while (!temp.empty()){
        push(temp.top());
        temp.pop();
    }
}

#endif
