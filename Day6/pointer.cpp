#include <iostream>
using namespace std;

int main() {
    // int a = 5;
    // int b = &a;

    int arr[5] = {1, 2, 3, 4, 5};

    int *p1 = &arr[0];
    int *p2 = arr;

    cout<<*p1<<endl;
    cout<<*p2<<endl;

    return 0;
}