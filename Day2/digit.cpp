#include <iostream>
#include<string>
#include <cctype>

using namespace std;

void check(char ch);

int main() {
    char ch;

    cout<<"Enter a character to know what type of char it is : ";
    ch = cin.get();

    check(ch);

    return 0;
}

void check(char ch){
    if(islower(ch)) {
        cout<<"The character "<<ch<<" is a lowercase character.\n";
    }
    else if (isupper(ch)) {
        cout<<"The character "<<ch<<" is a uppercase character.\n";
    }
    else if (isblank(ch)) {
        cout<<"The character "<<ch<<" is a blank.\n";
    }
    else if (isdigit(ch)) {
        cout<<"The character "<<ch<<" is a digit.\n";
    }
    else {
        cout<<"Could not recognise the character.";
    }
}