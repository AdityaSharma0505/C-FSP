#include <iostream>
using namespace std;

class Salary {
  private:
    float sal;
  public:
    Salary() : sal(10000) {}
    float getSalary() {
      return this->sal;
    }
    void printSalary() {
      cout << "Your Base Salary is: " << this->sal << endl;
    }
};

class MonthlySalary: public Salary {
  private: 
    float bonus;
  public:
    MonthlySalary() : bonus(2000) {}
    float getBonus() {
      return this->bonus;
    }
    void printSalary() {
      // call overridden function
      //Salary::printSalary();
      cout << "Your Total Salary is: " << (this->getSalary() + this->bonus) << endl;
    }
};
int main() {
  // Creating an object of the derived class.
  Salary s;
  // Creating an object of the derived class.
  MonthlySalary ms;
    
  // Gets the salary of Base class.
  s.printSalary();
  // Gets the salary of Derived class.
  ms.printSalary();
  // access printSalary() function of the Base class
  ms.Salary::printSalary();

  cout<<endl<<"============================================="<<endl;
  Salary *pSal = &s;
  Salary *pMSal = &ms;
  pSal->printSalary();
  pMSal->printSalary();

  return 0;
}
