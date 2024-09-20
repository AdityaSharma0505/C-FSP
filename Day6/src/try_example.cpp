#include <iostream>
using namespace std;

int main() {
    int x = -10;
    try {
        cout<<"Before Error\n";
        if(x < 0) {
            throw x;
            cout<<"After error : \n";
        }
    }
    catch (int x) {
        cout<<"Exception caught\n";
    }
    cout<<"After catch\n";

    return 0;
}