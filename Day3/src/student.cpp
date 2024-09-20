#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int age;
};

student getStudent();

int main() {
    int op;
    student s1;
    cout<<"Do you want to enter student details? (1/0) : ";
    cin>>op;
    if(op == 1) {
        s1 = getStudent();
        cout<<"Student Name : "<<s1.name<<endl;
        cout<<"Student Age : "<<s1.age<<endl;
    }
    else {
        cout<<"No data to enter.";
    }

    return 0;
}

student getStudent() {
    student s1;
    string lastName;
    cout<<"Enter the student's first name : ";
    cin>>s1.name;
    cout<<"Enter the student's last name : ";
    cin>>lastName;
    s1.name.append(" ").append(lastName);
    cout<<"Enter the student's age : ";
    cin>>s1.age;

    // student s1 = student{"Amit", 38};

    return s1;
}