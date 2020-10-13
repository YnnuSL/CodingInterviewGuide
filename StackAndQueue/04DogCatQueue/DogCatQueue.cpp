#include <queue>
#include <string>
#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "PetEnterQueue.h"
#include "DogCatQueue.h"
using namespace std;

DogCatQueue::DogCatQueue() : count(0) {}

void DogCatQueue::add(Pet aPet) {
    if (aPet.getPetType() == "dog") {
        PetEnterQueue ptq{aPet, count++};
        dogQ.push(ptq);
    } else if (aPet.getPetType() == "cat") {
        PetEnterQueue ptq{aPet, count++};
        catQ.push(ptq);
    } else {
        throw invalid_argument{"Error: Not dog or cat"};
    }
}

Pet DogCatQueue::pollAll() {
    if (!dogQ.empty() && !catQ.empty()) {
        if (dogQ.front().getCount() < catQ.front().getCount()) {
            Pet pollP = dogQ.front().getPet();
            dogQ.pop();
            return pollP;
        
        } else {
            Pet pollP = catQ.front().getPet();
            catQ.pop();
            return pollP;
        }
    }else if( !dogQ.empty()) {
        Pet pollP = dogQ.front().getPet();
        dogQ.pop();
        return pollP;
    } else if (!catQ.empty()) {
        Pet pollP = catQ.front().getPet();
        catQ.pop();
        return pollP;
    }else {
        throw runtime_error{"Error: queue is empty!"};
    }
}


Pet DogCatQueue::pollDog() {
    if (!isDogQueueEmpty()) {
        Pet aPollDog = dogQ.front().getPet();
        dogQ.pop();
        return aPollDog;
    } else {
        throw runtime_error{"Dog queue is empty!"};
    }
}

Pet DogCatQueue::pollCat() {
    if (!isCatQueueEmpty()) {
        Pet aPollCat = catQ.front().getPet();
        catQ.pop();
        return aPollCat;
    } else {
        throw runtime_error{"Cat queue is empty!"};
    }
}

bool DogCatQueue::isEmpty() {
    return dogQ.empty() && catQ.empty();
}

bool DogCatQueue::isDogQueueEmpty() {
    return dogQ.empty();
}

bool DogCatQueue::isCatQueueEmpty() {
    return catQ.empty();
}