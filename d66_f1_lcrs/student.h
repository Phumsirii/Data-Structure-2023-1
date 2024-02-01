#include <bits/stdc++.h>

int my_recur(node *n){
    if (!n) return -1;
    int b=1+my_recur(n->left_child);
    int tmp=my_recur(n->right_sibling);
    if (tmp>b) b=tmp;
    return b;
}

int depth(node *n){
    if (!n) return -1;
    return my_recur(n);
}
