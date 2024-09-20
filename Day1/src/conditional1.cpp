#include <iostream>
using namespace std;

int main(){
    //code to find the maximum of 2 numbers
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    
    // if(a > b) 
    //     cout << "1st number is greater";
    // else if (a == b)
    //     cout << "Both numbers are equal";
    // else
    //     cout << "2nd number is greater";

    //ternary operator
    //?: (conditional operator)
    
    //if a > b -> print "1st number is greater" 
    // else if a == b -> print "Both numbers are equal"
    // else print "2nd number is greater"

    //(condition) ? do if true : do if false
    a > b ? cout << "1st number is greater" : (a == b ? cout << "Both numbers are equal" : cout << "2nd number is greater");

}