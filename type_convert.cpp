#include <iostream>
using namespace std;

int main(){
    float marks = 87.5;
    int intMarks = marks;
    cout << marks << endl;  //87.5
    cout << intMarks << endl;  //87 - implicit type conversion

    int newIntMarks = int (marks); //87 - explicit type conversion using type casting
    cout << newIntMarks << endl;

    //static type cast
    int myIntMarks = static_cast <int> (marks);
    cout << myIntMarks << endl;

    //design our own datatype using Classes
    //lets say we have parent class name ParentType, and child class name as ChildType
    // ParentType p;
    // ChildType c = dynamic_cast <ChildType> p; 
}

