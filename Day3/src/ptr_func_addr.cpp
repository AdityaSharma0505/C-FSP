#include <iostream>
using namespace std;

// function declaration
int add(int x, int y)
{
    return x + y;
}

int main()
{
    // to output address, use the name of the function without brackets
    cout << "Address of the main() function is : " << main << endl;
    // accessing function address by using name without brackets
    cout << "Address of the add() function is : " << &add << endl;
    
    return 0;
}
