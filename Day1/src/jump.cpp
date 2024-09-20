#include <iostream>
using namespace std;

// calculate sum is choice = 1, avg if choice = 2
int calc(int a, int b, int choice){
    if(choice == 1)
        return a+b;
    else if(choice == 2)
        return (a+b)/2;
    else
        return -1; //error case
}

int main() {
    // int n = 5;
    // for (int i = 1; i <= n; ++i) {
    //     if (i == 3)
    //         continue;
    //     cout << "C++ is fun:" << i << endl;
    // }


    cout <<" \n==============================\n";
    int choice;
    cout<<"Enter 1 for sum and 2 for average"<<endl;
    cin>>choice;
    cout<<"Return Value is "<< calc(10, 20, choice)<<endl;

    return 0;
}
