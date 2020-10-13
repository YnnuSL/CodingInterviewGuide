#ifndef DOG_H
#define DOG_H

#include <string>
#include "Pet.h"

class Dog: public Pet {
public:
    Dog(std::string typeC);
};

#endif