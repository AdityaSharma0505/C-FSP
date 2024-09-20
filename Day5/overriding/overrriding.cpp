#include <iostream>
using namespace std; 

class Mother
{
    public:
        void printWakingTime()
        {
            cout <<"4:30" << endl;
        }
};
class Child : public Mother
{
    public:
        void printWakingTime()
        {
            cout <<"8:00" << endl;
        }
};

int main()
{
    /*Mother *m = new Mother;
    Child *c = new Child;
    m->printWakingTime();
    c->printWakingTime();*/

   /* Mother m;
    Child c;
    m.printWakingTime();
    c.printWakingTime();*/

     Mother *m = new Mother;
    Mother *c = new Child;
    m->printWakingTime();
    c->printWakingTime();
}