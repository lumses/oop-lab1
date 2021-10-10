#ifndef HLIST_H
#define HLIST_H
#include <iostream>
#include "hlist_item.h"
#include "hexagon.h"
#include <memory>

class HList {
public:
  HList();
  int size_of_list;
  void size();
  void empty();
  std::shared_ptr<HListItem> front();
  std::shared_ptr<HListItem> back();
  void push_front(std::shared_ptr<Hexagon> &&hexagon);
  void push_back(std::shared_ptr<Hexagon> &&hexagon);
  void pop_back();
  void pop_front();
  void insert(std::shared_ptr<Hexagon> &&hexagon, int pos);
  void erase(int pos);
  void clear();
  friend std::ostream& operator<<(std::ostream& os, HList& list);
  ~HList(); 
private:
  std::shared_ptr<HListItem> first;
  std::shared_ptr<HListItem> last;
};
 
#endif // HList_H
