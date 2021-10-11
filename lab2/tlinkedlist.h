#ifndef HLIST_H
#define HLIST_H
#include <iostream>
#include "hlist_item.h"
#include "hexagon.h"

class TLinkedList {
public:
  TLinkedList();
  int size_of_list;
  size_t Length();
  void Empty();
  HListItem* First();
  HListItem* Last();
  HListItem* GetItem(size_t idx);
  void InsertFirst(Hexagon &&hexagon);
  void InsertLast(Hexagon &&hexagon);
  void RemoveLast();
  void RemoveFirst();
  void Insert(Hexagon &&hexagon, size_t position);
  void Remove(size_t position);
  void Clear();
  friend std::ostream& operator<<(std::ostream& os, TLinkedList& list);
  ~TLinkedList(); 
private:
  HListItem *front;
  HListItem *back;
  HListItem *node;
};
 
#endif // HList_H

