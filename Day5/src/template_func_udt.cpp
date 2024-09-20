#include <iostream>
using namespace std;
class Person
{
    private:
        int age;
        string name;
    public:
        Person(string n, int a)
        {
            age = a;
            name = n;
        }
        void toString()
        {
            cout << name << " is " << age << " years old."<< endl;
        }
};

template < class T > 
void printData(T &obj)
{
	obj.toString();
}

int main()
{
    Person p1 = Person("Virat", 33);
    
    printData(p1);
    
    return 0;
}
