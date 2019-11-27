#include <iostream>
#include <cstring>
#include <vector>
#include "Room.h"
#include "Item.h"
#include "Player.h"

using namespace std;

Player::Player(Room* startRoom) {

  currentRoom = startRoom;
}

Room* Player::getCurrentRoom() {
  return currentRoom;

}

void Player::setCurrentRoom(Room* newRoom) {
  currentRoom = newRoom; 
}

char* Player::getName() {
  return name;

}

vector<Item*>* Player::getItems() {
  return &items;

}

void Player::addItem(Item*item) {
  items.push_back(item);
}

bool Player::validItem(char* itemName) {
  vector<Item*>::iterator it;
  for (it = items.begin(); it != items.end(); ++it) {
    if (strcmp((*it) -> getName(), itemName) == 0) {
      return true;
    }
  }
  return false; 
}

Item* Player::takeItem(char* itemName) {
  vector<Item*>::iterator it;
  for(it = items.begin(); it != items.end(); ++it) {
    if(strcmp((*it) -> getName(), itemName) == 0) {
      Item* i =  (*it);
      it = items.erase(it);
      return (i);
      
    }

  }
  return 0;


}

bool Player::keyItem(char* itemName) {
  const char str[1][50] = {"French Homework"};
  for (int i = 0; i < 5; i++) {
    if(strcmp(str[i], itemName) == 0) {
      return true;
    }
  }
  return false; 
}

void Player::printInventory() {
  vector<Item*>::iterator it;
  for (it = items.begin(); it != items.end(); ++it) {
    cout << (*it) -> getName() << " ";
  }

  cout << "\n";
}
