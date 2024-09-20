#include <iostream>
using namespace std;

template<class T>
class Base {
 
};

template<class U, class T>
class Derived : public Base<T>{
   //Use U in Derived class and pass T to Base class.
   //We can also use U and T in the Derived class.
};