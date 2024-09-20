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

class MonthlySalary: public Salary {
  private: 
    float bonus;
  public:
    MonthlySalary() : bonus(200000) {}
    float getBonus() {
      return this->bonus;
    }
    void printSalary() {
      cout << "Your Total Salary is: " << (this->getSalary() + this->bonus) << endl;
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
