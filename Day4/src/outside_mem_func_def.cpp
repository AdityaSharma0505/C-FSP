#include <iostream>
using namespace std;

class Person{
   private:
     string name;
     int age;

   public:
     Person(); //Default constructor
     Person(string, int) ; //Parameterized constructor
     ~Person(); //Destructor

     void setName(string);
     string getName();
     void setAge(int);
     int getAge();
     void print();
};

//Default constructor
Person::Person() : name(""), age(0) {}

//Parameterized constructor
Person::Person(string n, int a) : name(n), age(a) { cout <<"In the parameterized constructor."<<endl; }
     
//Destructor
Person::~Person() { cout <<"In the destructor."<<endl; }

void Person::setName(string n) { name = n; }

string Person::getName() { return name; }

void Person::setAge(int a) { age = a; }

int Person::getAge() { return age; }

void Person::print() { cout << "Person name : " << name << ", age = " << age << endl; }

int main(){
     Person p1;
     p1.setName("James");
     p1.setAge(20);
     cout << "Name : " << p1.getName()
          << " Age : " << p1.getAge() <<endl;

     Person p2 ("Harsh", 40);
     p2.print();
     
     return 0;
}