#include <iostream>
using namespace std;
class Mother{
    public:
        void display(){
            cout<<"I am Mother"<<endl;
        }
};

class Child : public Mother{
    public:
        void display(){
            cout<<"I am Child"<<endl;
        }
};

int main(){
    Mother *m = new Child();
    m->display();
    static_cast<Child*>(m)->display();
}