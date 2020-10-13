#include <iostream>
#include "MyStack.h"

void MyStack::push(int newNumber) {
    if (this->stackData.empty()) {
        this->stackMin.push(newNumber);
    }
    else if (newNumber < this->getMin()) {
        this->stackMin.push(newNumber);
    }else {
        int newMin = this->stackMin.top();
        this->stackMin.push(newMin);
    }
    this->stackData.push(newNumber);
}

void MyStack::pop() {
    if (this->stackData.empty()) {
        throw std::runtime_error("Your stack is empty.");
    }

    this->stackMin.pop();
    return this->stackData.pop();
}

int MyStack::getMin() {
    if (this->stackMin.empty()) {
        throw std::runtime_error("Your stack is empty.");
    }
    return this->stackMin.top();
}

void MyStack::printElements() {
    std::stack<int> copy_stackData(this->stackData);
    std::stack<int> copy_stackMin(this->stackMin);

    std::cout << "Stack Data: ";
    while (!copy_stackData.empty()){
        std::cout << copy_stackData.top() << " ";
        copy_stackData.pop();
    }
    std::cout << std::endl;

    std::cout << "Stack Min: ";
    while (!copy_stackMin.empty()){
        std::cout << copy_stackMin.top() << " ";
        copy_stackMin.pop();
    }
}