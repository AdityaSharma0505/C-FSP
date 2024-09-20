#include<iostream>
using namespace std;

int largest(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    int max;

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    cout<<"Enter the value of d : ";
    cin>>d;
    
    max = largest(a, b, c, d);

    cout<<"The largest number is : "<<max<<endl;

    return 0;
}

int largest(int a, int b, int c, int d = -999) {
    // int max = -999;
    // int arr[] = {a, b, c, d};

    // for(int i = 0; i < 4; i++) {
    //     if(arr[i] > max) {
    //         max = arr[i];
    //     }
    // }
    int max;

    // (a>b)?(a>c)?(a>d)?max = a:max = d:(c>d)?max = c:max = d:(b>c)?(b>d)?max = b:max = d:

    (a>b)?(a>c)?(a>d)?max = a:max = d:(c>d)?max = c:max = d:(b>c)?(b>d)?max = b:max = d:(c>d)?max = c:max = d;


}