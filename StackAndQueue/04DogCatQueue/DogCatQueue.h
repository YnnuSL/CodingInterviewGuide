#ifndef DOGCATQUEUE_H
#define DOGCATQUEUE_H

#include <string>
#include <queue>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "PetEnterQueue.h"

class DogCatQueue {
public:
    DogCatQueue();
    void add(Pet);
    Pet pollAll();
    Pet pollDog();
    Pet pollCat();
    bool isEmpty();
    bool isDogQueueEmpty();
    bool isCatQueueEmpty();
private:
    std::queue<PetEnterQueue> dogQ;
    std::queue<PetEnterQueue> catQ;
    int count;
};

#endif