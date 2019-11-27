#include <iostream>
#include <string>
#include "Room.h"
#include "Player.h"
#include "Parser.h"

using namespace std;

int main() {
  Parser parser;
  char input[50];
  bool stillPlay = true;
  cout << "Unfortunately for you, the all knowing Mr. Galbraith has caught you watching league of legends in class. He orders you to go find something productive to do, go search the school for something good enough to do.";
  Room* room11 = new Room();
  strcpy(room11->getName(), "French Room");
  strcpy(room11->getExplanation(), "There seems to be an odd amount of cheese in this room");
  Room* room12 = new Room();
  strcpy(room12->getName(), "Business Room");
  strcpy(room12->getExplanation(), "Be careful, the poor saps here they can actually be wealthy");
  Room* room13 = new Room();
  strcpy(room13->getName(), "Choir Room");
  strcpy(room13->getExplanation(), "My voice hurts being here");
  Room* room14 = new Room();
  strcpy(room14->getName(), "TOK Room");
  strcpy(room14->getExplanation(), "Our school system is so good we have an IB class about how to think about thinking");
  Room* room21 = new Room();
  strcpy(room21->getName(), "English Room");
  strcpy(room21->getExplanation(), "The nemesis of every Asian tryhard");
  Room* room22 = new Room();
  strcpy(room22->getName(), "Lunch Room");
  strcpy(room22->getExplanation(), "Food is a Stretch");
  Room* room23 = new Room();
  strcpy(room23->getName(), "Gym");
  strcpy(room23->getExplanation(), "There's like a foot of dust here, does anybody ever actually go in here?");
  Room* room24 = new Room();
  strcpy(room24->getName(), "History Room");
  strcpy(room24->getExplanation(), "Welcome to History HoAmies! Ok Boomer");
  Room* room31 = new Room();
  strcpy(room31->getName(), "Chemistry Room");
  strcpy(room31->getExplanation(), "This room doesn't explode that often, not worth the time");
  Room* room32 = new Room();
  strcpy(room32->getName(), "Math Room");
  strcpy(room32->getExplanation(), "For the love of god, don't let me fail another Calculus test");
  Room* room33 = new Room();
  strcpy(room33->getName(), "Band Room");
  strcpy(room33->getExplanation(), "Y'all ever sat down and blew air threw a pipe for 3 hours?");
  Room* room34 = new Room();
  strcpy(room34->getName(), "Physics Room");
  strcpy(room34->getExplanation(), "Never seen someone as charasmatic as Inertia Man");
  Room* room41 = new Room();
  strcpy(room41->getName(), "Main Office");
  strcpy(room41->getExplanation(), "Ew.");
  Room* room42 = new Room();
  strcpy(room42->getName(), "Counseling Office");
  strcpy(room42->getExplanation(), "Rumour has it they still haven't finished schedule changes");
  Room* room43 = new Room();
  strcpy(room43->getName(), "Biology Room");
  strcpy(room43->getExplanation(), "Use 0.5 inch margins or else");
  Room* room44 = new Room();
  strcpy(room44->getName(), "1-20");
  strcpy(room44->getExplanation(), "Ironically, the only place in the whole school I don't do any coding");
  room11->getExits()->insert(pair<const char*, Room*>("east", room12));
  room11->getExits()->insert(pair<const char*, Room*>("south", room21));
  room12->getExits()->insert(pair<const char*, Room*>("west", room11));
  room12->getExits()->insert(pair<const char*, Room*>("south", room22));
  room12->getExits()->insert(pair<const char*, Room*>("east", room13));
  room13->getExits()->insert(pair<const char*, Room*>("south", room23));
  room13->getExits()->insert(pair<const char*, Room*>("east", room14));
  room13->getExits()->insert(pair<const char*, Room*>("west", room12));
  room14->getExits()->insert(pair<const char*, Room*>("south", room24));
  room14->getExits()->insert(pair<const char*, Room*>("west", room13));
  
  room21->getExits()->insert(pair<const char*, Room*>("north", room11));
  room21->getExits()->insert(pair<const char*, Room*>("south", room31));
  room21->getExits()->insert(pair<const char*, Room*>("east", room22));
  room22->getExits()->insert(pair<const char*, Room*>("north", room12));
  room22->getExits()->insert(pair<const char*, Room*>("south", room32));
  room22->getExits()->insert(pair<const char*, Room*>("east", room23));
  room22->getExits()->insert(pair<const char*, Room*>("west", room21));
  room23->getExits()->insert(pair<const char*, Room*>("north", room13));
  room23->getExits()->insert(pair<const char*, Room*>("south", room33));
  room23->getExits()->insert(pair<const char*, Room*>("east", room24));
  room23->getExits()->insert(pair<const char*, Room*>("west", room22));
  room24->getExits()->insert(pair<const char*, Room*>("north", room14));
  room24->getExits()->insert(pair<const char*, Room*>("south", room34));
  room24->getExits()->insert(pair<const char*, Room*>("west", room23));
  
  room31->getExits()->insert(pair<const char*, Room*>("north", room21));
  room31->getExits()->insert(pair<const char*, Room*>("south", room41)); 
  room31->getExits()->insert(pair<const char*, Room*>("east", room32));
  room32->getExits()->insert(pair<const char*, Room*>("north", room22));
  room32->getExits()->insert(pair<const char*, Room*>("south", room42));
  room32->getExits()->insert(pair<const char*, Room*>("east", room33));
  room32->getExits()->insert(pair<const char*, Room*>("west", room31));
  room33->getExits()->insert(pair<const char*, Room*>("north", room23));
  room33->getExits()->insert(pair<const char*, Room*>("south", room43));
  room33->getExits()->insert(pair<const char*, Room*>("east", room34));
  room33->getExits()->insert(pair<const char*, Room*>("west", room32));
  room34->getExits()->insert(pair<const char*, Room*>("north", room24));
  room34->getExits()->insert(pair<const char*, Room*>("south", room44));
  room34->getExits()->insert(pair<const char*, Room*>("west", room33));

  room41->getExits()->insert(pair<const char*, Room*>("east", room42));
  room41->getExits()->insert(pair<const char*, Room*>("north", room31));
  room42->getExits()->insert(pair<const char*, Room*>("west", room41));
  room42->getExits()->insert(pair<const char*, Room*>("north", room32));
  room42->getExits()->insert(pair<const char*, Room*>("east", room43));
  room43->getExits()->insert(pair<const char*, Room*>("north", room33));
  room43->getExits()->insert(pair<const char*, Room*>("east", room44));
  room43->getExits()->insert(pair<const char*, Room*>("west", room42));
  room44->getExits()->insert(pair<const char*, Room*>("north", room34));
  room44->getExits()->insert(pair<const char*, Room*>("west", room43));

  Player* p = new Player(room44);

  Item* FrenchHomework = new Item((char*)"French Homework");
  room11->addItem(FrenchHomework);
  Item* Tuba = new Item((char*)"Tuba");
  room33->addItem(Tuba);
  Item* Calculator = new Item((char*)"TI Nspire");
  room32->addItem(Calculator);
  Item* Sandwich = new Item((char*)"Half Eated Sandwich");
  room22->addItem(Sandwich);
  Item* Ball = new Item((char*)"Deflated Basketball");
  room23->addItem(Ball);
  Item* History = new Item((char*)"One HoAmie, Inflatable");
  room24->addItem(History);
  Item* SmallBrain = new Item((char*)"World's Smallest Brain");
  room14->addItem(SmallBrain);
  Item* WaterBottle = new Item((char*)"Lost Water Bottle");
  room41->addItem(WaterBottle);
  Item* Margins = new Item((char*)"Margins of 0.5 Inches");
  room43->addItem(Margins);
  while(stillPlay) {
    cin.get(input, 50);
    cin.clear();
    cin.ignore(1000, '\n');
    stillPlay = parser.processCommand(input,p);
  }
  
  return 0;
}
