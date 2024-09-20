#include <iostream>
using namespace std;

union employee {
    int age;
    int salary;
    float height;
};

int main() {

    union employee employee1;

    employee1.age = 25;
    cout<<"Age of employee 1 : "<<employee1.age<<endl;
    cout<<"Address of age of employee 1 : "<<&employee1.age<<endl;

    employee1.salary = 100000;
    cout<<"Salary of employee 1 : "<<employee1.salary<<endl;
    cout<<"Address of salary of employee 1 : "<<&employee1.salary<<endl;

    employee1.height = 5.6;
    cout<<"Height of employee 1 : "<<employee1.height<<endl;
    cout<<"Address of height of employee 1 : "<<&employee1.height<<endl;

    return 0;
}