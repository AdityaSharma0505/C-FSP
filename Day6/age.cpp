#include <iostream>
using namespace std;

int main() {
    int age = 15;

    try{
        if (age < 18) {
            throw age;
        }
        else {
            cout<<"Access Granted\n";
        }
    }
    catch (int age) {
        cout<<"Access Rejected\n";
    }

    return 0;
}