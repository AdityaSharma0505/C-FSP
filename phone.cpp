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
    phone n1 = {91, 612, 2236478};
    phone n2 = getData();

    display(n1, n2);

    return 0;
}

phone getData() {
    phone n2;
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