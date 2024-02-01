#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  CP::list<T> result;
  if (pos==mSize) return result;
  node *last = (it.ptr)->prev;
  result.mHeader->next=last->next;
  result.mHeader->prev=mHeader->prev;
  last->next->prev=result.mHeader;
  result.mHeader->prev->next=result.mHeader;
  last->next=mHeader;
  mHeader->prev=last;
  result.mSize=mSize-pos;
  mSize=pos;
  return result;
}

#endif
