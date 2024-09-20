#include <iostream>
using namespace std;

class Person{
   private:
     string name;
     int age;
     static int count;

   public:
     //Default constructor
     Person() : name("Noname"), age(-100)
     { 
          cout <<"In the default constructor."<<endl; 
          count++;
          cout<<"Count : "<<count<<endl;
     }

     //Parameterized constructor
     Person(string n, int a) : name(n), age(a) 
     { 
          cout <<"In the parameterized constructor."<<endl; 
          count++;
          cout<<"Count : "<<count<<endl;
     }

     ~Person(){
          cout<<"In the destructor."<<endl;
          count--;
          cout<<"Count : "<<count<<endl;
     }

     void setName(string n) { name = n; }

     string getName() { return name; }

     void setAge(int a) { age = a; }

     int getAge() { return age; }

     void print() { cout << "Person name : " << name << ", age = " << age << endl;}
};

int Person::count = 0;

int main(){
     Person p1;
     cout << "Name : " << p1.getName()
          << " Age : " << p1.getAge() <<endl;


     Person p2 ("James", 20);
     p2.print();

     // Person p3(p1); //using default copy constructor
     // p3.print();

     // Person p4 = p2;  //using default copy constructor
     // p4.print();
     
     return 0;
}