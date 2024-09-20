#include <iostream>
using namespace std;

int main() {
    int a[3][2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout <<"Enter value of a["<<i<<"]["<<j<<"]:";
            cin >> a[i][j];
        }
    }
        
    //print
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 2; j++)
    //         cout<< a[i][j] << " ";
    //     cout <<endl;
    // }

    for(auto x : a){
        //x is a single dimentional array
        for(int j = 0; j < 2; j++)
            cout<< x[j] << " ";
        for(auto y : x){
            cout << y << " ";
        }
        cout <<endl;
    }
    
}