#include <iostream>
using namespace std;

class Salary {
  private:
    float sal;
  public:
    Salary() : sal(100000) {}
    float getSalary() {
      return this->sal;
    }
};

class Bonus {
  private: 
    float bonus;
  public:
    Bonus() : bonus(200000) {}
    float getBonus() {
      return this->bonus;
    }
};

class MonthlySalary: public Salary, public Bonus {
  public:
    void printSalary() {
      cout << "Your Total Salary is: " << (this->getSalary() + this->getBonus()) << endl;
    }
};
int main() {
    
  // Creating an object of the derived class.
  MonthlySalary x;
    
  // Gets the salary variable of Base class.
  cout << "Your Salary is:" << x.getSalary() << endl;
  // Gets the bonus variable of the Derived class.
  cout << "Your Bonus is:" << x.getBonus() << endl;
  x.printSalary();
  return 0;
}
