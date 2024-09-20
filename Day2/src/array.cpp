#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    cout<<arr<<endl<<endl;

    for(int i = 0; i < 5; i++) {
        cout<<arr[i];
        cout<<endl;
    }
    
    cout<<endl<<endl;

    for(int x : arr) {
        cout<<x<<endl;
    }

    return 0;
}