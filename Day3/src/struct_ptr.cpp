#include <iostream>
using namespace std;

struct Person {
    string first_name;
    string last_name;
    int age;
    float salary;
};

int main() {
    Person p;
    Person *ptr = &p;
    
    cout << "Enter first name: ";
    cin >> (*ptr).first_name;
    cout << "Enter last name: ";
    cin >> (*ptr).last_name;
    cout << "Enter age: ";
    cin >> (*ptr).age;
    cout << "Enter salary: ";
    cin >> (*ptr).salary;


    cout << "Displaying information." << endl;
    cout << "First Name: " << (*ptr).first_name << endl;
    cout << "Last Name: " << (*ptr).last_name << endl;
    cout << "Age: " << (*ptr).age << endl;
    cout << "Salary: " << (*ptr).salary;

    return 0;
}