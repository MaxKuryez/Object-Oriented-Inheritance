#ifndef CAT_H
#define CAT_H
#include "Figure.h"
#include<string>

class Cat : public Mammal
{
    public:
        Cat(string);
        virtual ~Cat();
        virtual void writeVoice() const;

    protected:

    private:

};

#endif // CAT_H
