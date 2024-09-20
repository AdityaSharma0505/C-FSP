#include <iostream>
using namespace std;

int fact(int n);

int main() {
    int n, factValue;
    cout<<"Enter the number to calculate factorial value : ";
    cin>>n;
    factValue = fact(n);

    cout<<"The factorial of this number is : "<<factValue<<endl;

    return 0;
}

int fact(int n) {
    if(n<=1) {
        return 1;
    }
    return n * fact(n - 1);
}