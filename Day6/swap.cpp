#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2);

int main() {
    int x, y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    
    cout<<"The original value of x : "<<x<<" , y : "<<y<<endl;
    
    int *ptr1 = &x;
    int *ptr2 = &y;

    swap(ptr1, ptr2);

    cout<<"The original value of x : "<<x<<" , y : "<<y<<endl;

    return 0;
    
}

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}