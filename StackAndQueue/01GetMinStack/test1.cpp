#include <iostream>
#include "MyStack.h"
using namespace std;



int main() {
    {
        MyStack myStack1;
        // myStack1.getMin();
        myStack1.push(3);
        myStack1.push(4);
        myStack1.push(5);
        myStack1.push(1);
        myStack1.push(2);
        myStack1.push(1);
        myStack1.printElements();

    }

}


