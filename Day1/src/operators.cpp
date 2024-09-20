#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 3;

    // int c = a++*++b+b ---a; //(10 * 4) + 3 - (-(-10)) = 40 + 3 - 10 = 33
    // //calculations are performed using operator precedence
    // ///like the BODMAS rule in maths
    // cout << c <<endl; //34
    // cout << a <<endl; //10
    // cout << b <<endl; //4

    // cout << "a + b = " << a + b << endl;
    // cout << "a - b = " << a - b << endl;
    // cout << "a * b = " << a * b << endl;
    // cout << "a / b = " << a / b << endl;
    // cout << "a % b = " << a % b << endl;

    // float c = (float)a / (float)b;
    // cout << c;


    // int p = 10;
    // int q = 2;
    // //p = p+q;  //increasing value of p by q
    // p+=q; //short hand notation
    // cout << p;

    // bool flag = true;
    // bool flag2 = false;
    // cout << (flag && flag2) << endl;  //true and false = false i.e. 0
    // cout << (flag || flag2) << endl; //true or false = true i.e. 1
    // cout << (!flag) << endl; //not true = false i.e. 0

    int x = 10;
    int y = 0;
    cout << (x && y) << endl;  // 10 and 0 = true and false = false i.e. 0
    cout << (x || y) << endl; // 10 or 0 = true or false = true i.e. 1
    cout << (!x) << endl; // not 10 = not true = false i.e. 0

}