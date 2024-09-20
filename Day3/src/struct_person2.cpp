#include <iostream>
#include <string>
using namespace std;

// define structure
struct Person {
    string first_name;
    string last_name;
    int age;
    float salary;
};

// declare functions
Person getPersonData();
void displayPersonData(const Person&);

int main() {

    Person p = getPersonData();
    displayPersonData(p);

    return 0;
}

// define function to return structure variable
Person getPersonData() {

    Person p;
    
    string first_name;
    string last_name;
    int age;
    float salary;
    
    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;
    
    // return structure variable
    return Person{first_name, last_name, age, salary};
}

// define function to take
// structure variable as an argument
void displayPersonData(const Person& p) {
    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p.first_name << endl;
    cout << "Last Name: " << p.last_name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}