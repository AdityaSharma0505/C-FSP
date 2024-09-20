#include <iostream>
using namespace std;

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

enum Color { Red, Green, Blue };

int main()
{
    Day today;
    today = Wednesday;
    cout << "Day " << today+1<<endl;
    cout<<sizeof(today)<<endl;
    cout<<sizeof(Day)<<endl;
    return 0;
}