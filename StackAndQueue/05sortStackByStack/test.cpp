#include <iostream>
#include <stack>
#include "sortStackByStack.h"
using namespace std;

int main() {
    stack<int> myStack;
    myStack.push(2);
    myStack.push(3);
    myStack.push(5);
    myStack.push(4);
    myStack.push(6);
    myStack.push(1);

    printStack(myStack);

    myStack = sortStackByStack(myStack);

    printStack(myStack);
}
