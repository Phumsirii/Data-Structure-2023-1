#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,size_t level,size_t tmp,std::vector<KeyT> &v) {
    if (level<tmp){
        level+=1;
        if (n->right!=nullptr) my_recur(n->right,level,tmp,v);
        if (n->left!=nullptr) my_recur(n->left,level,tmp,v);
    }
    else v.push_back(n->data.first);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT,MappedT,CompareT>::at_level(size_t level) {
    std::vector<KeyT> v;
    my_recur(mRoot,0,level,v);
    return v;
}


#endif
