#include <iostream>

using namespace std;

int main() {

    int var1 = 10;

    // create a reference to the variable
    int& ref_var1 = var1;
    
    // display the variable
    cout << "var1 = " << var1 << endl;
    cout << "ref_var1 = " << ref_var1 << endl;
    
    int var2 = 50;
    
    // trying to modify the ref_var1 reference variable to refer to var2
    // but it assigns the value of var2 to the variable var1
    ref_var1 = var2;

    // display the variables
    cout << endl << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "ref_var1 = " << ref_var1 << endl;

    return 0;
}