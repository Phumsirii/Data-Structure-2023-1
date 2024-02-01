void shift(int k) {
    if (mSize==0 || (k=((k%(int)mSize)+(int)mSize)%(int)mSize)==0) return;
    node *tmp=mHeader->next;
    while (k--) tmp=tmp->next;
    mHeader->prev->next=mHeader->next;
    mHeader->next->prev=mHeader->prev;
    mHeader->next=tmp;
    mHeader->prev=tmp->prev;
    tmp->prev->next=mHeader;
    tmp->prev=mHeader;
}
