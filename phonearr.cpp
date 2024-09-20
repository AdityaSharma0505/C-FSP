#include <iostream>
using namespace std;

struct phone{
    int country;
    int state;
    int number;
};

phone getData();
void display(phone n1, phone n2);

int main() {
    int n;

    cout<<"How many phone numbers you want to store : ";
    cin>>n;
    if(n <= 0) {
    phone arr[n];
    for(int i = 0; i < n; i++) {
    cout<<"Enter the country code for phone number "<<i+1<<" : \n";
    cin>>n2.country;
    cout<<"Enter the state code for phone number "<<i+1<<" : \n";
    cin>>n2.state;
    cout<<"Enter the number for phone number "<<i+1<<" : \n";
    cin>>n2.number;
    }
    }
    else {
        cout<<"No data to enter.";
    }

    return 0;
}

phone getData(i) {
    phone p1;
    cout<<"Enter the country code : ";
    cin>>n2.country;
    cout<<"Enter the state code : ";
    cin>>n2.state;
    cout<<"Enter the number : ";
    cin>>n2.number;

    return n2;
}

void display(phone n1, phone n2) {
    cout<<"Phone number 1 : \n";
    cout<<"(+"<<n1.country<<")"<<n1.state<<"-"<<n1.number<<endl;
    cout<<"Phone number 2 : \n";
    cout<<"(+"<<n2.country<<")"<<n2.state<<"-"<<n2.number<<endl;
}