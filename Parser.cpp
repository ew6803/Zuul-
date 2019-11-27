#include <iostream>
#include <string.h>
#include <cstring>
#include <vector>
#include "Room.h"
#include "Parser.h"
#include "Player.h"
#include "Item.h"

using namespace std;

char* Parser::substr(char* str, int start, int end) {
  char* sub = new char[end-start+1];
  int x = 0;
  for (int i = start; i < end; i++) {
    sub[x] = str[i];
    x++;
  }
  return sub;
}
//Functions that respond to user inputs
//Move functions
bool Parser::processCommand(char* str, Player* player) {
  if (strncmp(str, "go ", 3) == 0) {
  char* direction = substr(str, 3, strlen(str) + 1);
  if(player->getCurrentRoom()->isValidRoom(direction)) {
    player->setCurrentRoom(player->getCurrentRoom()->getExitRoom(direction));
    //cout << player->getName() -> endl;
    cout << player->getCurrentRoom() -> getExplanation() << endl;
    delete direction;
    }
  else {
    cout << "You cant go that way" << endl;
}

}
  //Pick up functions
 else if(strncmp(str, "take ", 5) == 0) {
   char* ItemName = substr(str, 5, strlen(str) + 1);
   if(player->getCurrentRoom()->validItem(ItemName)) {
     player-> addItem(player->getCurrentRoom()->takeItem(ItemName));
     cout << "Item Picked Up" << endl;
   }
   else {
     cout << "Not an item in this room." << endl;
     
   }
 }
  //Drop function
 else if(strncmp(str, "drop ", 5) == 0) {
   char* ItemName = substr(str, 5, strlen(str) + 1);
   if(player->validItem(ItemName)) {
     player->getCurrentRoom() -> addItem(player->takeItem(ItemName));
     cout << "Item dropped" << endl;
     
 }
   else {
     cout << "You dont have this item!" << endl;
       }

 }
  //Extra information
 else if(strcmp(str, "help") == 0) {
   cout << "You are at sunset, and you are on a quest to find a mystery item for Mr. Galbraith. Bring it back to him. GL!";

 }
 else if(strcmp(str, "inventory") == 0)  {
   player->printInventory();
 }
 
 else if(strcmp(str, "exits") == 0) {
   player->getCurrentRoom()->getExitDirections();
 }
 else if(strcmp(str, "items") == 0) {
   player->getCurrentRoom() -> printItems();
 }
  //To win the game, you must enter checkwin and then the ite. The code will check if you indeed have the item and decide if yo uwon
 else if(strcmp(str, "checkwin") == 0) {
   if(strcmp(player->getCurrentRoom()->getName(), "1-20") == 0) {
     cout << "Ah, you are back. What is the secret item? \n";
     char input[50];
     cin.getline(input, 50);
     if ((player->validItem(input) == true) && (player->keyItem(input) == true)) {
       cout << "Congrats, you have beat the game \n";
       return true;
       exit(0);
     }
     else {
       cout << "The item you chose you either don't have or is not the right one \n";
     }

   
 }
 else {
   cout << "You aren't in the right room \n";
 }
  
 }
  //Exit the room
 else if (strcmp(str, "exit") == 0) {
   cout << "Thanks for playing my game.";
   exit(0);
 }

 else {
   cout << "Enter a valid command plz." << endl; 
 }
  return true; 
}
