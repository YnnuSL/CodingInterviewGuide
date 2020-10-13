#include <stack>
#include <iostream>

std::stack<int> sortStackByStack(std::stack<int> myStack) {
    std::stack<int> helpStack;

    while (!myStack.empty()) {
        // int current = myStack.top();
        // myStack.pop();
        // int helpTop;
        // if (!helpStack.empty()) {
        //     helpTop = helpStack.top();
        //     while (!helpStack.empty() && current > helpTop) {
        //         myStack.push(helpTop);
        //         helpStack.pop();
        //         helpTop = helpStack.top();
        //     }
        // } 
        // helpStack.push(current);

        int current = myStack.top();
        myStack.pop();
        
        while (!helpStack.empty() && current > helpStack.top()) {
            myStack.push(helpStack.top());
            helpStack.pop();
        }

        helpStack.push(current);
    }

    while (!helpStack.empty()) {
        // current = helpStack.top();
        // helpStack.pop();
        // myStack.push(current);
        myStack.push(helpStack.top());
        helpStack.pop();
    }

    return myStack;
}

// std::stack<int> sortStackByStack(std::stack<int> myStack, bool largeScale) {
//     std::stack<int> helpStack;

//     while (!myStack.empty()) {
//         int current = myStack.top();
//         myStack.pop();
        
//         int count = 0;
//         while (!helpStack.empty() && current > helpStack.top()) {
//             myStack.push(helpStack.top());
//             count++;
//             helpStack.pop();
//         }
        
//         helpStack.push(current);

//     }

//     while (!helpStack.empty()) {
//         myStack.push(helpStack.top());
//         helpStack.pop();
//     }

//     return myStack;
// }


void printStack(std::stack<int> myStack) {
    std::stack<int> printS{myStack};
    std::cout << "Stack from top to bottom: \n";
    while (!printS.empty()) {
        std::cout << printS.top() << ", ";
        printS.pop();
    }
    std::cout << '\n' <<std::endl;
}
