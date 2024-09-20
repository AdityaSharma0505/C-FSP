#include <iostream> 
using namespace std; 
  
class engine {
public: 
    void showf() 
    { 
        cout << "Hello from engine\n"; 
    } 
}; 
   
class car { 
    
    engine e; 
  
public: 
    // constructor 
    car() 
    { 
        // calling function of first class 
        e.showf(); 
    } 
}; 
  
int main() 
{ 
    // creating object of second 
    car c; 

    return 0;
} 