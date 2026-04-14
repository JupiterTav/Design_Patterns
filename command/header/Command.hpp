#pragma once
#include "Character.hpp"

class Command {
  public:
    virtual ~Command(){}
    virtual void execute(Character &c) = 0;
};




