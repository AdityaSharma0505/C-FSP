#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        static int count;
    
    public: 
        void display() {
            cout<<"Age : "<<this->age<<endl;
            cout<<"Count : "<<count<<endl;
        }
        static void displaystatic() {
            cout<<"Age : "<<age<<endl;
            cout<<"Count : "<<count<<endl;
        }

        // In static
};

int Person::count = 0;

int main() {
    Person p;
    p.display();
    Person::displaystatic();
    p.displaystatic();

    return 0;
}