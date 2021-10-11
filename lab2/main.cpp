#include <iostream>
#include "tlinkedlist.h"

int main() {
  TLinkedList tlinkedlist;
  tlinkedlist.InsertLast(Hexagon(Point(1,2),Point(2,3),Point(3,4),Point(5,6),Point(7,8),Point(9,10)));
  tlinkedlist.InsertLast(Hexagon(Point(11,12),Point(12,13),Point(13,14),Point(14,15),Point(15,16),Point(16,17)));
  tlinkedlist.InsertLast(Hexagon(Point(17,18),Point(18,19),Point(19,20),Point(20,21),Point(21,22),Point(23,24)));
  tlinkedlist.InsertLast(Hexagon(Point(17,18),Point(18,19),Point(19,20),Point(20,21),Point(21,22),Point(23,24)));
  std::cout << tlinkedlist;
  tlinkedlist.RemoveLast();
  tlinkedlist.Insert(Hexagon(Point(1,1),Point(2,3),Point(3,4),Point(5,6),Point(7,8),Point(9,16)),2);
  tlinkedlist.Remove(2);
  std::cout << tlinkedlist;
  tlinkedlist.Clear();
  return 0;
}
