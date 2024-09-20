#include <iostream>
using namespace std;

int main(){
    char name[50];
    int marks;

    cout << "Enter your name: ";
    cin.getline(name,50);

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Hello " << name << endl;
    cout << "You have got " << marks << " marks." << endl;
}