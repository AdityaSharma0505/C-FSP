#include <iostream>
using namespace std;

template < class T >
  class Container {
    private:
      T data;
    public:
      static int count;
    Container() {
      count++;
    }

    static void displayStaticVariable() {
      cout << count << endl;
    }
  };

template < class T >
  int Container < T > ::count = 0;

int main() {
  Container < int > obj1;
  Container < float > obj2;
  Container < int > obj3;
  Container < int > ::displayStaticVariable();
  Container < float > ::displayStaticVariable();

  return 0;
}
