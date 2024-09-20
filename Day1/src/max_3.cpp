#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Enter number 1:";
    cin >> a;
    cout << "Enter number 2:";
    cin >> b;
    cout << "Enter number 3:";
    cin >> c;

    //logic to find greatest of 3 numbers
    //if a is greater than b, and a is greater than c, then a is the greatest


    if(a > b) {
        if(a > c){
            cout <<"The greatest number is: " << a;
        }
        else {  //i.e. c > a
            cout <<"The greatest number is: " << c;
        }
    } else { // i.e. b > a
        if(b > c){
            cout <<"The greatest number is: " << b;
        } else {
            cout <<"The greatest number is: " << c;
        }
    }

}