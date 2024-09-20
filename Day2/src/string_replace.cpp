#include <iostream>
#include <string>
using namespace std;

int main() {

    // cout<<"Enter a string: ";
    string str = "Welcome to C++ Programming!";
    // getline(cin, str);

    // cout << "Before: " << str << endl;

    cout<<"The original string : "<<str<<endl;
    
    // replace three characters with "Java"
    // starting from the seventh index
    // str.replace(11, 3, "Java");

    // cout << "After: " << str << endl;

    cout<<"Enter search string : ";
    string search_str;
    getline(cin, search_str);
    int length = search_str.length();

    size_t first_occurence = str.find(search_str);

    string new_string;
    cout<<"Enter the new string : ";
    getline(cin, new_string);

    if(first_occurence != string::npos) {
        str.replace(first_occurence, length, new_string);
        cout << "After: " << str << endl;
    }
    else {
        cout << "'"<<search_str<<"' not found" << endl;
    }

    return 0;
}