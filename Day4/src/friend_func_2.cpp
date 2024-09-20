#include <iostream>
using namespace std;

class PersonAge{
    private: int age;
    public: 
        PersonAge(int a) { age = a; }
        void displayAge(){ cout << age << endl; }

        friend void add(PersonAge obj, int x);
};

void add(PersonAge obj, int x){
    
    obj.age += x;
}


int main()
{
    PersonAge obj(10);
    obj.displayAge();
    add(obj, 10);
    obj.displayAge();
    return 0;
}