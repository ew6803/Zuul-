#include <iostream>
#include <cstring>
#include "Item.h"
#include "Room.h"

using namespace std;

Item::Item(char* setName) {
  name = setName;
  
}

char*Item::getName() {
  return name;
}
