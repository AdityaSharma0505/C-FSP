#include <iostream>
using namespace std;

class BaseSalary{
  public:
    void printSalary() {cout <<"Base Salary uninitialised"<<endl;}
};

class Salary: public BaseSalary {
  private:
    float sal;
  public:
    Salary() : sal(10000) {}
    float getSalary() {
      return this->sal;
    }
};

class Bonus: public BaseSalary {
  private: 
    float bonus;
  public:
    Bonus() : bonus(2000) {}
    float getBonus() {
      return this->bonus;
    }
};

class MonthlySalary: public Salary, public Bonus {
  public:
    // void printSalary() {
    //   cout << "Your Total Salary is: " << (this->getSalary() + this->getBonus()) << endl;
    // }
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
