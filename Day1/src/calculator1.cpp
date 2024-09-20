#include <iostream>
using namespace std;

int main()
{
    //calculate sum, difference, multiplication, division of 2 numbers, based on user choice.
    int a, b, choice;

    cout << "Enter number 1:";
    cin >> a;
    cout << "Enter number 2:";
    cin >> b;

    cout << "Enter 1 for addition \n2 for subtraction \n3 for multiplication \n4 for division:";
    cin >> choice;

    switch (choice)
    {   
    case 1:
        cout << a + b; break;
    case 2:
        cout << a - b; break;
    case 3:
        cout << a * b; break;
    case 4:
        cout << a / b; break;
    default:
        cout << "Wrong choice";
    }

    return 0;
}