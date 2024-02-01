void replace(const T& x, list<T>& y) {
    iterator it = begin();
    while (it!=end()){
        if (*it==x){
            auto tmp=erase(it);
            for (auto e=y.begin();e!=y.end();e++) insert(tmp,*e);
            it=tmp;
        }
        else it++;
    }
}
