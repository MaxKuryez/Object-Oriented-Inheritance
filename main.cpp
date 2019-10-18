#include <iostream>
#include <vector>
#include "Figure.h"
#include "Cat.h"

using namespace std;

int main()
{
    vector<Mammal*> zoo;
    zoo.push_back( new Cat("Pete"));
    zoo.push_back( new Cat("Jon"));
    for (auto i = zoo.begin(); i != zoo.end();  i++){
        (*i) -> writeVoice();
    }
    for (auto p: zoo){
        p -> writeVoice();
    }
    for (size_t i = 0; i < zoo.size(); i++){
        zoo[i] -> writeVoice();
    }
    return 0;
}
