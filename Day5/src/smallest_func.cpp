#include <iostream>
using namespace std;

template <class T>
class Smallest {

    private:
        T a;
        T b;
    
    public:
        Smallest(T a, T b) : Small(a, b) {
            cout<<"Inside constructor";<<endl;
        }

        T getSmall() {
            if (a > b)
            {
                /* code */
                return a;
            }
            else {
                return b;
            }
            
        }
};

int main() {

    Smallest<int> answerInt(60, 40);

    Smallest<char> answerChar('a', 'A');

    Smallest<string> answerString("The correct answer is a");


}