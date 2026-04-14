#include "header/Command.hpp"

class MoveCommand : public Command {
  public:
    virtual void  execute(Character &c){
      c.move();
    }
};


