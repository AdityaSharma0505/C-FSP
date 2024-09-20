#include <iostream>

class MyClass {
  private:
    int a;


public:
  MyClass() {
    count++; // incrementing count inside the constructor
    std::cout << "MyClass constructor called. (count=" << count << ")" << std::endl;
  }

  ~MyClass() {
    count--; // decrementing count inside the destructor
    std::cout << "MyClass destructor called. (count=" << count << ")" << std::endl;
  }

  static int count; //static data member
  static int getCount() {  //static member function
    std::cout<<"Trying to print non static data a:" << a <<endl;
    return count; 
  }  
};

int MyClass::count = 0; // Initializing the static member variable

int main() {
  MyClass obj1; // First constructor call, count becomes 1
  MyClass obj2; // Second constructor call, count becomes 2
  MyClass obj3;
  MyClass obj4;

  std::cout << "MyClass::count = " << MyClass::count << std::endl;
  std::cout << "MyClass::getCount() = " << MyClass::getCount() << std::endl;

  return 0;
}
