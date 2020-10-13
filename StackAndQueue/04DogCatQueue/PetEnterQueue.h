#ifndef PETENTERQUEUE_H
#define PETENTERQUEUE_H

#include <string>
#include "Pet.h"

class PetEnterQueue {
public:
    PetEnterQueue(Pet, int);
    Pet getPet();
    int getCount();
    std::string getEnterPetType();
private:
    Pet pet;
    int count;
};

#endif