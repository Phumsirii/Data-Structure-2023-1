int getHeight(node *n){
    if (n==NULL) return -1;
    return 1+std::max(getHeight(n->left),getHeight(n->right));
}

void getMostImbalance(node *n,int &mostImbalanced,KeyT &holder){
    if (n==NULL) return;
    int tmp = std::abs(getHeight(n->left)-getHeight(n->right));
    if (tmp>mostImbalanced){
        holder=n->data.first;
        mostImbalanced=tmp;
    }
    else if (tmp==mostImbalanced && holder>(n->data.first)) holder=n->data.first;
    getMostImbalance(n->left,mostImbalanced,holder);
    getMostImbalance(n->right,mostImbalanced,holder);
}

KeyT getValueOfMostImbalanceNode() {
    KeyT result=(mRoot->data).first;
    int most=0;
    getMostImbalance(mRoot,most,result);
    return result;
}
