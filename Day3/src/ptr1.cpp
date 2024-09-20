#include <iostream>
using namespace std;
int main() {
    int var = 5;

    // store address of var
    int* point_var = &var;

    // print value of var
    cout << "var = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl;

    // print pointer point_var
    cout << "point_var = " << point_var << endl;

    // print the content of the address point_var points to
    cout << "Content of the address pointed to by point_var (*point_var) = " << *point_var << endl;

    *point_var = 10;
    cout << "After changing the Content of the address pointed to by point_var (*point_var) = " << *point_var;
    
    return 0;
}