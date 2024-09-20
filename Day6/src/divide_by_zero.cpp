#include <iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
        throw "Division by zero not allowed.";
    else if(b < 0)
        throw -1;

    return a/b;
}

int main()
{
    int x = 50;
    int y = 0;

    try{
        int answer = division(x, y);
        cout << " Output: " << answer << endl;
    }
    catch(const char* errorMessage){
        cout<<"Error Message : "<<errorMessage<<endl;
    }

    return 0;
}

