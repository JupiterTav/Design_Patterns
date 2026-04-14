#include <iostream>
#include <string>

struct  Character{
  private:
    int x{0};
    int y{0};

    std::string name;
  public:
    Character(std::string _name) : name(_name) {}
    void move();
};

inline void Character::move(){
  x = x+1;
  y = y+1;

  std::cout << name << "now is at: " << x << ", " << y << std::endl;
}



