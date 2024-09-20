#include <iostream>
using namespace std;  

void printSizeOfArray(int a[]){
    

}

int main(){
    int arr[5] = {3,5,2,6,7};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout <<sizeof(arr)/sizeof(arr[0])<<endl;
}