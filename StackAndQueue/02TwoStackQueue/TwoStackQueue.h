#include <stack>

#ifndef TWOSTACKQUEUE_H
#define TWOSTACKQUEUE_H

class TwoStackQueue{
public:
    std::stack<int> stackPush;
    std::stack<int> stackPop;
    void add(int pushInt);
    int poll();
    int peek();

private:
    void pushToPop();
};


#endif

