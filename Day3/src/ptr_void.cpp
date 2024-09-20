#include <iostream>
using namespace std;

int main()
{
    char var1 = 'a';
    int var2 = 1;
    
    // declaring a void pointer
    void *ptr;

    ptr = &var1; // void pointer holds address of char var1
    
    ptr = &var2; // void pointer holds address of int var2
    
    // dereferencing ptr without converting it to 1 particular data type
    // cout << *ptr;  // this will generate an error
    
    // This will work:
    cout << *(int *)ptr;

    return 0;
}
