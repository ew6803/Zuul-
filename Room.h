#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include "Item.h"

using namespace std;
class Item;

class Room {
 public:
  Room();
  char* getName();
  char* getExplanation();
  vector<Item*>* getItems();
  map<const char*, Room*>* getExits();
  Room* getExitRoom(char*);
  bool isValidRoom(char*);
  bool validItem(char* itemName);
  void addItem(Item*);
  void printItems();
  void getExitDirections();
  Item* takeItem(char*);
 private:
  char name[100];
  char explanation[1000];
  vector<Item*> items;
  map<const char*, Room*> exits;

};

#endif
  
