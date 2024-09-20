#include <iostream>
using namespace std;

int length(int arr[]);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size;

    size = length(arr);
    cout<<size;

    return 0;
}

int length(int arr[]) {
    cout<<sizeof(arr)<<endl;
    

}