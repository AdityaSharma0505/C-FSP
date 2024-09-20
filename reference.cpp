#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main() {
    int x = 5;
    int &ref1 = x;
    int y = 10;
    int &ref2 = y;
    
    cout<<"Before, for x : \n";
    cout<<x<<endl;
    cout<<ref1<<endl;
    cout<<&x<<endl;
    cout<<&ref1<<endl;


    cout<<"Before, for y : \n";
    cout<<y<<endl;
    cout<<ref2<<endl;
    cout<<&y<<endl;
    cout<<&ref2<<endl;

    swap(x, y);

    cout<<"After, for x : \n";
    cout<<x<<endl;
    cout<<ref1<<endl;
    cout<<&x<<endl;
    cout<<&ref1<<endl;


    cout<<"After, for y : \n";
    cout<<y<<endl;
    cout<<ref2<<endl;
    cout<<&y<<endl;
    cout<<&ref2<<endl;

    return 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}