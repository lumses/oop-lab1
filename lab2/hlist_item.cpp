#include "hlist_item.h"

#include <iostream>

HListItem::HListItem(const Hexagon& hexagon) {
  this->hexagon = hexagon;
  this->next = nullptr;
  std::cout << "HList item: created" << std::endl;
}
 
HListItem::HListItem(const HListItem& other) {
  this->hexagon = other.hexagon;
  this->next = other.next;
  std::cout << "List item: copied" << std::endl;
}
 
HListItem* HListItem::SetNext(HListItem* next) {
  HListItem* prev = this->next;
  this->next = next;
  return prev;
}
 
Hexagon HListItem::GetHexagon() const {
  return this->hexagon;
}
 
HListItem* HListItem::GetNext() {
  return this->next;
}
 
HListItem::~HListItem() {
  std::cout << "List item: deleted" << std::endl;
  delete next;
}
 
std::ostream& operator<<(std::ostream& os, const HListItem& obj) {
  os << "[" << obj.hexagon << "]" << std::endl;
  return os;
}
