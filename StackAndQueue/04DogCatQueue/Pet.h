#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
    Pet(std::string typeP);
    std::string getPetType();
private:
    std::string typePet;
};

#endif