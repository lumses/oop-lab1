
#include <iostream>
#include "hexagon.h"


class HListItem {
public:
  HListItem(Hexagon &hexagon);
  // HListItem(HListItem& other);
  friend std::ostream& operator<<(std::ostream& os, HListItem& obj);
  ~HListItem();
  Hexagon hexagon;
  HListItem* next;
};
 