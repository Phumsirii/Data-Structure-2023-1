void splitList(list<T>& list1, list<T>& list2) {
    if (mSize==0) return;
    int n1=(mSize/2)+(mSize%2);
    node* it = (mHeader)->next;

    it->prev=(list1.mHeader)->prev;
    (list1.mHeader)->prev->next=it;
    for (int i=0;i<n1-1;i++) it=it->next;
    node *it2=it->next;
    it->next=(list1.mHeader);
    (list1.mHeader)->prev=it;
    list1.mSize+=n1;


    it2->prev=(list2.mHeader)->prev;
    (list2.mHeader)->prev->next=it2;
    mHeader->prev->next=(list2.mHeader);
    (list2.mHeader)->prev=mHeader->prev;

    list2.mSize+=(mSize-n1);
    mSize=0;
    mHeader->next=mHeader;
    mHeader->prev=mHeader;
}
