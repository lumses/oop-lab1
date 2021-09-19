#ifndef HLIST_ITEM_H
#define HLIST_ITEM_H
 
#include "hexagon.h"

class TStackItem {
public:
  HListItem(const Hexagon& hexagon);
  HListItem(const HListItem& other);
  
  HListItem* SetNext(HListItem* next);
  HListItem* GetNext();

  Hexagon GetHexagon() const;
 
  friend std::ostream& operator<<(std::ostream& os, const HListItem& obj);
  
  virtual ~HListItem();

private:
  Hexagon hexagon;
  HListItem *next;
};
 
#endif // HLIST_ITEM_H