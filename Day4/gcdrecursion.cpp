#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b);

int main() {
    int a, b, result;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    result = gcd(a, b);

    cout<<"The GCD of "<<a<<" and "<<b<<" is : "<<result<<endl;

    return 0;
}

int gcd(int a, int b){
    if(b != 0) {
        return gcd(b, a % b);
    }
    else {
        return a;
    }
}