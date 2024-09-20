#include <iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(): name("noname"), age(-100){}

        string getName(){
            return this->name;
        }

        int getAge(){
            return this->age;
        }

        void display(){
            cout<<this->getName()<<" is "
                <<this->getAge()<< " years old."<<endl;
        }
};

int main(){
    Person p;
    p.display();
    return 0;
}   