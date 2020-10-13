#include <iostream>
#include "TwoStackQueue.h"
using namespace std;

int main() {
    TwoStackQueue myqueue;
    cout << "add 1 ";
    myqueue.add(1);
    cout << "add 2 ";
    myqueue.add(2);
    cout << "add 3 ";
    myqueue.add(3);
    cout << "add 4 ";
    myqueue.add(4);
    cout << "add 5 " << endl;
    myqueue.add(5);

    cout << "peek: " << myqueue.peek() << endl;
    cout << "poll: " << myqueue.poll() << endl;
    cout << "poll: " << myqueue.poll() << endl;

    cout << "add 6 ";
    myqueue.add(6);
    cout << "add 7 " << endl;
    myqueue.add(7);
    cout << "poll: " << myqueue.poll() << endl;
    cout << "poll: " << myqueue.poll() << endl;
    cout << "poll: " << myqueue.poll() << endl;
    cout << "poll: " << myqueue.poll() << endl;
    cout << "poll: " << myqueue.poll() << endl;
    cout << "poll: " << myqueue.poll() << endl;
}
