#include <iostream>
using namespace std;

class Balance{
    
    private:
        int b;

    public: 
        
        // Constructor 
        Balance(int val = 0) : b(val) {
            // b = val;
        }

        // Display 
        void display() const {
            cout<<"The balance is : "<<b<<endl;
        }

        // balance operator+(Balance b2)

        Balance operator-(Balance b2) {
            Balance b3;
            b3.b = this->b - b2.b;
            return b3;
        }
};

int main() {
    int x = 20, y = 10;
    int c = x - y;
    cout<<c<<endl;

    Balance b1, b2;
    Balance b3 = b1 - b2;
    // Balance b3 = b1.operator+(b2);

    b3.display();

    return 0;
}