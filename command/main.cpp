
#include <iostream>
#include <string>

struct  Character{
  private:
    int x{0};
    int y{0};

    std::string name;
  public:
    Character(std::string _name) : name(_name) {}
    void move(){
      x = x+1;
      y = y+1;

      std::cout << name << "now is at: " << x << ", " << y << std::endl;
    }
};



class Command {
  public:
    virtual ~Command(){}
    virtual void execute(Character &c) = 0;
};



class MoveCommand : public Command {
  public:
    virtual void  execute(Character &c){
      c.move();
    }
};


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
