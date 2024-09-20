#include <iostream>
using namespace std;

template<class T>
class Base {
  
};

template<class T>
class Derived : public Base<T>{
    //Pass the T to Base class
};