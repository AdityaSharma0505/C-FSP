// C++ Program to display address of each element of an array 

#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {2,6,8};

    // declare pointer variable
    int *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    cout<<"\nDisplaying values using pointers: "<< endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << "*(ptr + " << i << ") = "<< *(ptr + i) << endl;
    }

    // Display data using pointer notation
    cout << "Displaying values using array name as pointer: " << endl;
    for (int i = 0; i < 3; ++i) {

        // display value of arr[i]
        cout << "*(arr + " << i << ") = "<< *(arr + i) << endl;

    }

    return 0;
}