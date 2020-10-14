#include <iostream>
#include <string>

using namespace std;

int hanoiProblem(int num, string left, string mid, string right);
int process(int num, string left, string mid, string right, string from, string to);

int hanoiProblem(int num, string left, string mid, string right) {
    if (num < 1){
        return 0;
    }

    return process(num, left, mid, right, left, right);
}

int process(int num, string left, string mid, string right, string from, string to){

    if (num == 1) {
        if (from.compare(mid) == 0 || to.compare(mid) == 0) {
            cout << "Move 1 from " << from << " to " << to << endl;
            return 1;
        } else {
            cout << "Move 1 from " << from << " to " << mid << endl;
            cout << "Move 1 from " << mid << " to " << to << endl;
            return 2;
        }
    }

    if (from.compare(mid) == 0 || to.compare(mid) == 0) {
        string another = (from.compare(left) == 0 || to.compare(left) == 0) ? right : left;
        int part1 = process(num-1, left, mid, right, from, another);
        int part2 = 1;
        cout << "MOve " << num << " from " << from << " to " << to << endl;
        int part3 = process(num-1, left, mid, right, another, to);
        return part1 + part2 + part3;
    } else {
        int part1 = process(num-1, left, mid, right, from, to);
        int part2 = 1;
        cout << "Move " << num << " from " << from << " to " << mid << endl;
        int part3 = process(num - 1, left, mid, right, to, from);
        int part4 = 1;
        cout << "Move " << num << " from " << mid << " to " << to << endl;
        int part5 = process(num-1, left, mid, right, from, to);
        return part1 + part2 + part3 + part4 + part5;
    }

}

