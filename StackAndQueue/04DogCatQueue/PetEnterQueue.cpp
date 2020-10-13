#include <string>
#include "PetEnterQueue.h"
#include "Pet.h"

PetEnterQueue::PetEnterQueue(Pet p, int c) : pet(p), count(c) {}

Pet PetEnterQueue::getPet() {
    return pet;
}

int PetEnterQueue::getCount() {
    return count;
}

std::string PetEnterQueue::getEnterPetType() {
    return pet.getPetType();
}
