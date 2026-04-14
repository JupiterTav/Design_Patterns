#include "../MoveCommand.cpp"

class InputHandler{
  public:
    Command* handleInput(){
      if(std::cin.get() == 'm')
          return moveButton;
        return NULL;

    }
    
  private:
    Command* moveButton = new MoveCommand;
};


