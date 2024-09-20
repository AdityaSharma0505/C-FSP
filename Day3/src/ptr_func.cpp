#include <iostream>
using namespace std;

// function add
int add(int a, int b){
    return a + b;
}
int main(){	
    // function pointer declaration
    int (*ptr)(int, int);
	
    // pointer initialization
    ptr = add;

    //calling the function using the pointer
    int sum = (*ptr)(4,5);
    cout << "Sum = " << sum << endl;
	
    return 0;
}
