#include <iostream>
using namespace std;

void factors();

int main() {
    int op;
    while(1){
        cout<<"Do you want to check (1/0) : ";
        cin>>op;
        if(op == 1) {
            factors();
        }
        else if(op == 0) {
            exit(0);
        }
        else {
            cout<<"Invalid option!";
        }
    }

    return 0;

}
void factors() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if (n > 0) {
    for(int i = n; i >= 1; i--) {
        if(n % i == 0) {
            cout<<i<<endl;
        }
    }
    }
    else {
        cout<<"Enter a number > 0\n";
    }
}