#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person();

        ~Person();
        void setName(string n);
        void setAge(int a);
        string getName(){ return name;}
        int getAge(){return age;}
};

Person::Person() : name("noname"), age(0) {}
Person::~Person() {}

void Person::setName(string n) {name = n;}

int main() { 
    Person p;
    cout << "Name : " << p.getName()
         << " Age : " << p.getAge() <<endl;
}