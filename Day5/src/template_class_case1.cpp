#include <iostream>
using namespace std;

class Base {
};

template < class T >
class Derived: public Base {
    //Use T inside the Derived class
};