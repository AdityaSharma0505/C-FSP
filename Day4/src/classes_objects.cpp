#include <iostream>
using namespace std;

class Person{
   private:
        string name;
        int age;
        static int count;

   public:
     
     Person() {
          cout<<"In the default constructor."<<endl;
          name = "noname";
          age = -100;
     }

     Person(string n, int a) {
          cout<<"In the parameterized constructor."<<endl;
          name = n;
          age = a;
     }

        void setName(string n)
        { name = n; }

        string getName()
        { return name; }

        void setAge(int a)
        { age = a; }

        int getAge()
        { return age; }

        void display() {
          cout<<"Name : "<<this->getName()<<" Age is :"<<this->getAge()<<endl;
        }

        static void staticDisplay () {
          cout<<"Name : "<<getName()<<" Age is :"<<getAge()<<endl;
        }

};

int Person::count = 0;

int main(){
    Person p;
//     p.setName("James");
//     p.setAge(20);
    cout << "Name : " << p.getName()
         << " Age : " << p.getAge() <<endl;
         cout<<"======================="<<endl;
         Person p2("Amit", 38);
         cout << "Name : " << p2.getName()
         << " Age : " << p2.getAge() <<endl;
         p.display();
    return 0;
}