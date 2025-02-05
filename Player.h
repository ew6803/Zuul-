#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <cstring>
#include <vector>
#include "Room.h"

using namespace std;

class Player{
 public:
  Player(Room*);
  char* getName();
  void setCurrentRoom(Room*);
  Room* getCurrentRoom();
  bool keyItem(char*);
  void printInventory();
  Item* takeItem(char*);
  bool validItem(char*);
  void addItem(Item*);
  vector<Item*>* getItems();

 private:
  char name[50];
  vector<Item*> items;
  Room* currentRoom;
};

#endif 
