#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    if (a<this->begin() ||a>this->end()||a==this->end() || a+m>this->end()){
        return false;
    }
    if (b<this->begin() || b==this->end() || b>this->end() || b+m>this->end()){
        return false;
    }
    if (a>b && b+m>a){
        return false;
    }
    if (b>a && a+m>b){
        return false;
    }
    if (a==b || m<=0){
        return false;
    }
    for (int i=0;i<m;i++){
        using std::swap;
        swap(*(a+i),*(b+i));
    }
    return true;
}

#endif
