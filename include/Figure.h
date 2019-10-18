#ifndef FIGURE_H
#define FIGURE_H
#include <string>
using namespace std;

class Mammal
{
    public:
        Mammal(string );
        virtual ~Mammal();
        virtual void writeVoice()  const = 0;
    protected:
       string name;
       double weight;
    private:


};

#endif // FIGURE_H
