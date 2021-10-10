
#include <iostream>
#include "hexagon.h"
#include <memory>

class HListItem {
public:
  HListItem(std::shared_ptr<Hexagon> &hexagon);
  friend std::ostream& operator<<(std::ostream& os, HListItem& obj);
  ~HListItem();
  std::shared_ptr<Hexagon> hexagon;
  std::shared_ptr<HListItem> next;
};
 