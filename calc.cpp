#include <iostream>
using namespace std;

void add(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);

int main() {
    int op;
    while(1) {
        cout<<"\n\n";
        for(int i = 0; i < 20; i++) {
        cout<<"-";
    }
    cout<<"\n";
    cout<<"     Calculator\n";
    for(int i = 0; i < 20; i++) {
        cout<<"-";
    }
    
    cout<<endl<<endl;
    cout<<"Enter your choice : \n1) - Add\n2) - Subtract\n3) - Multiply\n4) - Divide\n5) - Exit\n";
    cin>>op;

    float a, b;
    cout<<"\n\nEnter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    switch(op) {
        case 1:
            add(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5: 
            exit(0);
            break;
        default:
            cout<<"Invalid option!";
            break;
    }
    }


    return 0;
}

void add(float a, float b) {
    cout<<"The addition of "<<a<<" and "<<b<<" = "<<a+b;
}
void sub(float a, float b) {
    cout<<"The subtraction of "<<b<<" from "<<a<<" = "<<a-b;
}
void mul(float a, float b) {
    cout<<"The multiplication of "<<a<<" and "<<b<<" = "<<a*b;
}
void div(float a, float b) {
    if(b == 0) {
        cout<<"Dividing by zero is not allowed.";
    }
    else {
    cout<<"The division of "<<a<<" and "<<b<<" = "<<a/b;
    }
}