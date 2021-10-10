#include <iostream>
#include "hlist.h"
 
HList::HList() {
  size_of_list = 0;
  HListItem* first;
  HListItem* last;
  std::cout << "Hexagon List created" << std::endl; 
}
void HList::size() {
  std::cout << "Size of Hexagon List is "<< size_of_list << std::endl;
}
void HList::empty() {
  if (size_of_list == 0){
    std::cout << "Hexagon List is empty" << std::endl;
  } else {
    std::cout << "Hexagon List is not empty" << std::endl;
  }
}
HListItem* HList::front() {
  return first;
}
HListItem* HList::back() {
  return last;
}
void HList::push_back(Hexagon &&hexagon) {
  HListItem* obj = new HListItem(hexagon);
  if(size_of_list == 0) {
    first = obj;
    last = obj;
    size_of_list++;
    return;
  }
  last->next = obj;
  last = obj;
  obj->next = nullptr;
  size_of_list++;
}
void HList::pop_back() {
  if (size_of_list == 0) {
    std::cout << "Hexagon does not pop_back, because the Hexagon List is empty" << std:: endl;
  } else {
    if (first == last) {
      pop_front();
      size_of_list--;
      return;
    }
    HListItem* prev_del = first;
    while (prev_del->next != last) {
      prev_del = prev_del->next;
    }
    prev_del->next = nullptr;
    delete last;
    last = prev_del;
    size_of_list--;
    } 
}
void HList::push_front(Hexagon &&hexagon) {
    HListItem* obj = new HListItem(hexagon);
    if(size_of_list == 0) {
      first = obj;
      last = obj;
    } else {
      obj->next = first;
      first = obj;
    }
    size_of_list++;
}
void HList::pop_front() {
    if (size_of_list == 0) {
      std::cout << "Hexagon does not pop_front, because the Hexagon List is empty" << std:: endl;
    } else {
    HListItem* del = first;
    first = del->next;
    delete del;
    size_of_list--;
    }
}
void HList::insert(Hexagon &&hexagon,int pos) {
  if (pos <0) {
    std::cout << "Position < zero" << std::endl;
  } else if (pos > size_of_list) {
    std::cout << " Position > size_of_list" << std::endl;
  } else {
    HListItem* obj = new HListItem(hexagon);
    if (pos == 0) {
      first = obj;
      last = obj;
    } else {
      int k = 0;
      HListItem* prev_insert = first;
      HListItem* next_insert;
      while(k+1 != pos) {
        k++;
        prev_insert = prev_insert->next;
      }
      next_insert = prev_insert->next;
      prev_insert->next = obj;
      obj->next = next_insert;
    }
    size_of_list++;
  }
}
void HList::erase(int pos) {
  if ( pos > size_of_list ) {
    std:: cout << "Position " << pos << " > " << "size " << size_of_list << " Not correct erase" << std::endl;
  } else if (pos < 0) {
    std::cout << "Position < 0" << std::endl;
  } else {
    if (pos == 0) {
      pop_front();
    } else {
      int k = 0;
      HListItem* prev_erase = first;
      HListItem* next_erase;
      HListItem* del;
      while( k+1 != pos) {
        k++;
        prev_erase = prev_erase->next;
      }
      next_erase = prev_erase->next;
      del = prev_erase->next;
      next_erase = del->next;
      delete del;
      prev_erase->next = next_erase;
    }
    size_of_list--;
  }
}
void HList::clear() {
  HListItem* del = first;
  HListItem* prev_del;
  if(size_of_list !=0 ) {
    while(del->next != nullptr) {
      prev_del = del;
      del = del->next;
      delete prev_del;
    }
    delete del;
    size_of_list = 0;
    //   std::cout << "HListItem deleted" << std::endl;
  } 
  size_of_list = 0;
  HListItem* first;
  HListItem* last;
}
std::ostream& operator<<(std::ostream& os, HList& hl) {
  if (hl.size_of_list == 0) {
    os << "The hexagon list is empty, so there is nothing to output" << std::endl;
  } else {
    os << "Print Hexagon List" << std::endl;
    HListItem* obj = hl.first;
    while(obj != nullptr) {
      if (obj->next != nullptr) {
        os << obj->hexagon << " " << "," << " ";
        obj = obj->next;
      } else {
        os << obj->hexagon;
        obj = obj->next;
      }
    }
    os << std::endl;
  }
  return os;
}
HList::~HList() {
  HListItem* del = first;
  HListItem* prev_del;
  if(size_of_list !=0 ) {
    while(del->next != nullptr) {
      prev_del = del;
      del = del->next;
      delete prev_del;
    }
    delete del;
    size_of_list = 0;
    std::cout << "Hexagon List deleted" << std::endl;
  } 
}