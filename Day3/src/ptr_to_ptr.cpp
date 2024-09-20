#include <iostream>
using namespace std;

int main()
{
    int var = 10;

    cout << "Value of &var is: " << &var << endl;
    cout << "Value of var is: " << var << endl << endl;

    // declaring a pointer
    int *ptr1;

    // declaring a pointer to a pointer
    int **ptr2;

    // assigning address of variable var to ptr1
    ptr1 = &var;

    cout << "Value of ptr1 is: " << ptr1 << endl;
    cout << "Value of &ptr1 is: " << &ptr1 << endl;
    cout << "Value of *ptr1 is: " << *ptr1 << endl << endl;

    // assigning address of pointer ptr1 to ptr2;
    ptr2 = &ptr1;

    cout << "Value of ptr2 is: " << ptr2 << endl;
    cout << "Value of *ptr2 is: " << *ptr2 << endl;
    cout << "Value of **ptr2 is: " << **ptr2 << endl << endl;
    
    return 0;
}
