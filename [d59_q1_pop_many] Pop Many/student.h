#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
    size_t n = this->size();
    if (n>K){
        for (size_t i=0;i<K;i++){
            this->pop();
        }
    }
    else{
        while (!this->empty()){
            this->pop();
        }
    }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    size_t n = this->size();
    std::stack<T> a;
    std::stack<T> b;
    if (n>K){
        for (size_t i=0;i<K;i++){
            a.push(this->top());
            this->pop();
        }
    }
    else{
        while (!this->empty()){
            a.push(this->top());
            this->pop();
        }
    }
    while (!a.empty()){
        b.push(a.top());
        a.pop();
    }
    return b;
}

#endif
