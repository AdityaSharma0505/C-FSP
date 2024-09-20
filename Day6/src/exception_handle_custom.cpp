#include <iostream>
using namespace std;

class MyException : public exception { 
    private: 
        string message; 
    
    public: 
        // Constructor accepts a const char* that is used to set 
        // the exception message 
        MyException(const char* msg) : message(msg) {} 
    
        // Override the what() method to return our message 
        const char* what() const throw() { 
            return message.c_str(); 
        } 
}; 

int division(int a, int b)
{
    // checking if the denominator is 0 or not.
    if (b == 0){
	    // if the denominator is 0, then we must throw an exception
        throw MyException("MyException: Division by zero!");
    }
    // if there is no exception, then we are returning the answer.
    return int(a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    int answer = 0;
    /*
    Using a try catch block because in divison, the denominator can be 0. 
    So, we must handle the 0 divion inside try block.
   */
    try {
        answer = division(x, y);
        cout << " Output: " << answer << endl;
    }
    // printing the thrown exception from the function
    catch (MyException e){
        cout << e.what() << endl;
    }

    return 0;
}

