#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string.h>
#include <vector>
#include "Room.h"
#include "Item.h"
#include "Player.h"

class Parser {
 public:
  void processCommand(char*, Player*);
 private:
  char* substr(char*, int, int);

};

#endif
