//WAP to enter names in a loop, and greet them, until the user says Good Bye

#include <iostream>
#include <cstring>

using namespace std;
int main(){
    char name[100];

    do {
        cout << "Enter your name: ";
        cin.getline(name, 100);
        cout << "Hello "<<name <<endl;

    } while(strcmp(name, "Good Bye") != 0);
    
    cout <<"Bye Bye"<<endl;
    return 0;

}