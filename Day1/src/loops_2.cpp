//WAP to enter N numbers and find their sum, average based on user choice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    int choice;
    cout<<"Enter 1 for sum and 2 for average"<<endl;
    cin>>choice;

    cout << "Provide Number of elements:-";
    cin >> n;
    int sum=0;
    float avg=0;
    int k;

    for(int i=1;i<=n;i++){
        cout << "Provide Number" << i <<":";
        cin >> k;
        sum+=k;
    }
    
    switch (choice)
    {
    case 1:
        //find sum
        cout << "Your Sum is:- " << sum << endl;
        break;
    case 2:
        //find avg
        avg=sum/n;
        cout << "Your Average is:- "<< avg<< endl;
        break;
    default:
        //wrong choice
        cout << "Wrong Choice" << endl;
        break;
    }
    return 0;
}