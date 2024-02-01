#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
    if (ptr->left==nullptr && ptr->right==nullptr) return 0;
    if (ptr->left==nullptr) return 1+process(ptr->right);
    if (ptr->right==nullptr) return 1+process(ptr->left);
    return process(ptr->left)+process(ptr->right);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
    if (mSize==0) return 0;
    return process(mRoot);
}

#endif
