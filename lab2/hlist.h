#ifndef HLIST_H
#define HLIST_H
 
#include "hexagon.h"
#include "hlist_item.h"
 
class HList {
public:
  HList();
  HList(const HList& other);
  
  void push(Hexagon &&hexagon);
  Hexagon pop();

  bool empty();
  
  friend std::ostream& operator<<(std::ostream& os, const HList& stack);
  
  virtual ~HList();

private:  
  HListItem *head;
};
 
#endif // HList_H
