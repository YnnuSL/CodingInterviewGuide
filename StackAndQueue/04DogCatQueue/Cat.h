#ifndef CAT_H
#define CAT_H

#include <string>
#include "Pet.h"

class Cat: public Pet {
public:
    Cat(std::string typeC);
};

#endif