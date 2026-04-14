
#include <iostream>
#include "header/InputHandler.hpp"

int main (int argc, char *argv[]) {
  

  Character player("Player1");
  InputHandler inputHandler;

  Command* command = NULL;

  std::cout << "m  -> move character" << std::endl;

    command = inputHandler.handleInput();
    if(command != NULL)
      command->execute(player);
    else
     std::cout << "Invalid Input" << std::endl;
  return 0;
}
