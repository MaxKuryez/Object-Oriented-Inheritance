#include "Cat.h"
#include "Figure.h"
#include <iostream>

Cat::Cat(string n):Mammal(n)
{

}

Cat::~Cat()
{

}

void Cat::writeVoice() const{
 cout<<name<<": MEOW!"<<endl;
}
