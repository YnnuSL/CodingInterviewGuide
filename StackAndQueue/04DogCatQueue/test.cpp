#include <string>
#include <iostream>
// #include "Cat.h"
// #include "Dog.h"
// #include "Pet.h"
#include "PetEnterQueue.h"
#include "DogCatQueue.h"

using namespace std;


int main(){
    // Cat cat{"cat"};
    // Dog dog{"dog"};
    // cout << "Type: " <<cat.getPetType() << endl;
    // cout << "Type: " <<dog.getPetType() << endl;

    Cat c1{"cat"}, c2{"cat"};
    Dog d1{"dog"}, d2{"dog"};

    DogCatQueue dcq;

    cout << "dogcatqueue is empty? " << dcq.isEmpty() << endl;
    // dcq.add(c1);
    // dcq.add(c2)

}