#include <stack>

#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack{
public:
    void push(int newNum);
    void pop();
    int getMin();
    void printElements();

private:
    std::stack<int> stackData;
    std::stack<int> stackMin;
};


#endif

