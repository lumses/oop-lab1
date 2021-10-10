#include <iostream>
#include "hlist.h"

int main() {
  HList hlist;
  hlist.empty();
  hlist.push_back(std::shared_ptr<Hexagon>(new Hexagon(Point(1,2),Point(2,3),Point(3,4),Point(5,6),Point(7,8),Point(9,10))));
  hlist.push_back(std::shared_ptr<Hexagon>(new Hexagon(Point(11,12),Point(12,13),Point(13,14),Point(14,15),Point(15,16),Point(16,17))));
  hlist.push_back(std::shared_ptr<Hexagon>(new Hexagon(Point(17,18),Point(18,19),Point(19,20),Point(20,21),Point(21,22),Point(23,24))));
  hlist.push_front(std::shared_ptr<Hexagon>(new Hexagon(Point(17,18),Point(18,19),Point(19,20),Point(20,21),Point(21,22),Point(23,24))));
  std::cout << hlist;
  hlist.pop_back();
  hlist.empty();
  hlist.insert(std::shared_ptr<Hexagon>(new Hexagon(Point(1,1),Point(2,3),Point(3,4),Point(5,6),Point(7,8),Point(9,16))),2);
  hlist.erase(2);
  std::cout << hlist;
  hlist.clear();
  return 0;
}