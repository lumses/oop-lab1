#ifndef HLIST_H
#define HLIST_H
#include <iostream>
#include "hlist_item.h"
#include "hexagon.h"

class HList {
public:
  HList();
  int size_of_list;
  void size();
  void empty();
  void copy(HListItem*& cur,HListItem* cp);
  HListItem* front();
  HListItem* back();
  void push_front(Hexagon &&hexagon);
  void push_back(Hexagon &&hexagon);
  void pop_back();
  void pop_front();
  void insert(Hexagon &&hexagon, int pos);
  void erase(int pos);
  void clear();
  friend std::ostream& operator<<(std::ostream& os, HList& list);
  ~HList(); 
private:
  HListItem *first;
  HListItem *last;
  HListItem *node;
};
 
#endif // HList_H
