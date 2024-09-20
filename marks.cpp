#include <iostream>
using namespace std;

int main() {
    float marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    
    (marks >= 60)?(marks >= 75)?cout<<"DISTINCTION":cout<<"PASS":cout<<"FAIL";

    return 0;
}