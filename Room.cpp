#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include "Room.h"
#include "Item.h"

using namespace std;

Room::Room() {

}

char* Room::getName() {

  return name;
}

char* Room::getExplanation() {

  return explanation;

}

vector<Item*>* Room::getItems() {

  return &items;
}

map<const char*, Room*>* Room::getExits() {

  return &exits;
}

void Room::addItem(Item* item) {
  items.push_back(item);
}

bool Room::validItem(char* itemName) {
  vector<Item*>::iterator it;
  for(it = items.begin(); it != items.end(); ++it) {
    if(strcmp((*it)->getName(), itemName) == 0) {
      return true;
    }
  }
  return false; 
}

void Room::printItems() {
  vector<Item*>::iterator it;
  for(it = items.begin(); it != items.end(); ++it) {
    cout << (*it) -> getName() << " ";
  }
  cout << endl;
}

Item* Room::takeItem(char* itemName) {
  vector<Item*>::iterator it;
  for(it = items.begin(); it != items.end(); ++it) {
    if(strcmp((*it) -> getName(), itemName) == 0) {
      Item* i = (*it);
    it:items.erase(it);
      return (i);
    }
  }
  return NULL;
}

bool Room::isValidRoom(char* room) {
  map<const char*, Room*>::iterator it;
  for(it = this->exits.begin(); it != this->exits.end(); ++it) {
    if(strcmp(it->first, room) ==0) {
      return true;
    }
  }
}

Room* Room::getExitRoom(char* room) {
  map<const char*, Room*>::iterator it;
  for(it = this-> exits.begin(); it != this->exits.end(); ++it) {
    if(strcmp(it->first, room) == 0) {
      return it->second;
    }
  }
  return 0;
}

void Room::getExitDirections() {
  int i = 0;
  map<const char*, Room*>::iterator it;
  for(it = this->exits.begin(); it != this ->exits.end(); ++it) {
    cout << it-> first << " ";
    i++;
  }
  cout << "\n";

}
