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

        virtual void display(){
            cout<<"The Name of Person is "<<name<<" and age is "<<age<<endl;
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
        cout<<"The Student "<<getName()<<" is in "<<standard<<" with current grade "<<grades<<endl;
    }
};

int main(){
    Person* personPointer = new Person("XYZ", 29);
    personPointer->display();

    //Downcast
    Person* personPointer2 = new Student("ABDE", 19, "Information Technology");
    personPointer2->display();
    //Student* studentPointer = personPointer2; //error, we need to type cast the pointer
    Student* studentPointer2 = static_cast<Student*>(personPointer2); //unsafe if personPointer2 does not point to Student object
    studentPointer2->setGrades(7.9);
    studentPointer2->display();

    /*
     * We can use the cast operator dynamic_cast<> to perform safe downcasting 
     * from one class to another. It is used in polymorphic classes. 
     * At runtime the operator checks whether the required conversion is valid or not. 
     */
    Student* studentPointer3 = dynamic_cast<Student*>(personPointer2);
    studentPointer3->setGrades(9.9);
    studentPointer3->display();

    Student* studentPointer4 = dynamic_cast<Student*>(personPointer); //invalid downcast
    //static_cast does not give any error, but dynamic_cast errors and terminates the program
    studentPointer4->setGrades(9.9);
    studentPointer4->display();

}
