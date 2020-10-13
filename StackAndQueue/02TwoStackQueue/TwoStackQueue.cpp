#include <stack>
#include <iostream>
#include "TwoStackQueue.h"

void TwoStackQueue::pushToPop() {
    if (stackPop.empty()) {
        while (!stackPush.empty()) {
            stackPop.push(stackPush.top());
            stackPush.pop();
        }
    }
}

void TwoStackQueue::add(int pushInt) {
    stackPush.push(pushInt);
    pushToPop();
}

int TwoStackQueue::poll() {
    int outNumber;
    if (stackPush.empty() && stackPop.empty()) {
        throw std::runtime_error("Queue is empty!");
    }

    pushToPop();
    outNumber = stackPop.top();
    stackPop.pop();
    return outNumber;
}

int TwoStackQueue::peek() {
    if (stackPush.empty() && stackPop.empty()) {
        throw std::runtime_error("Queue is empty!");
    }

    pushToPop();
    return stackPop.top();
}

