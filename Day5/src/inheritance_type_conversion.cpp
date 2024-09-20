#include <iostream>
using namespace std;

// Base class
class Person
{
    private:
        string name;
        int age;

    public: 
        // Constructor:
        Person(string str, int n) : name(str), age(n){}
        
        //Default Constructor
        Person(){}

        // Access methods
        int getAge(void) const { return age; }
        void setAge( int n ) { age = n; }

        const string& getName() const{ return name; }

        void display(){
            cout<<"The Name of Person is "<<name<<" and age is "<<age<<".\n";
        }
};

//Derived Class
class Student: public Person 
{
    private:
        string standard;
        float grades;

    public:
    // Constructor:
    Student(string strName, int age, string std) : Person(strName, age), standard(std){}
    
    //Default Constructor
    Student(){}
    
    //Access Methods
    const string& getStandard() const{ return standard; }
    void setStandard( const string std) { standard = std; }

    float getGrades() const { return grades; }
    void setGrades( float g ) { grades = g; }

    //Overloaded Function
    void display(){
        cout<<"The Student "<<getName()<<" is in "<<standard<<" with current grade "<<grades<<".\n";
    }
};

int main(){
    Student s1("XYZ", 19, "UnderGraduate");
    Person p1;
    
    cout<<"Using variable of base class type to store derived class object."<<endl;
    //This p1 object can only access the Public Interface of Person Class
    p1 = s1;
    p1.display();     // will use the display method of Person Class
    p1.getName();
    //p1.getStandard(); // Will cause an error: ‘class Person’ has no member named ‘getStandard’

    cout<<endl<<"=========================="<<endl;
    cout<<"Using pointer of base class type to point to derived class object."<<endl;
    Person *personPointer = &s1;

    personPointer->display();
    cout<<personPointer->getName();
    //personPointer->getGrades(); // will cause error: ‘class Person’ has no member named ‘getGrades’

    cout<<endl<<"=========================="<<endl;
    cout<<"Using reference of base class type as alias of a derived class object."<<endl;
    Person &baseReference = s1;

    baseReference.display();
    cout<<baseReference.getName();
}
