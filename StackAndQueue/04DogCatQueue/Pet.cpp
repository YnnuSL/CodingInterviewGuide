#include <string>
#include "Pet.h"

Pet::Pet(std::string typeP) {
    typePet = typeP;
}

std::string Pet::getPetType() {
    return typePet;
}
