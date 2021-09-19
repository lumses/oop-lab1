#include "hlist.h"
 
HList::HList() : head(nullptr) {

}
 
HList::HList(const HList& other) {
  head = other.head;
}
 
std::ostream& operator<<(std::ostream& os, const HList& list) { 
  TStackItem *item = list.head;
  
  while(item != nullptr) {
    os << *item;
    item = item->GetNext();
  }
  
  return os;
}


void HList::push(Hexagon &&hexagon) { // TODO: check why &&
  HListItem *other = new HListItem(hexagon);
  other->SetNext(head);
  head = other;
}
 
bool HList::empty() {
  return head == nullptr;
}

Hexagon HList::pop() {
  if (head == nullptr)
    // todo: throw an exception
  Hexagon res = head->GetHexagon();
  HListItem *prev = head;
  head = head->GetNext();
  prev->SetNext(nullptr);
  delete prev;
  return res;
}
 
HList::~HList() {
  delete head;
}
