#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // writing in the file

    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    ofstream ofile;
    ofile.open("sample.txt", ios::app);

    ofile << str << endl;

    ofile.close();

    // reading the file
    
    ifstream ifile;
    ifile.open("sample.txt");
    
    if(ifile) {
        char ch;
        while(!ifile.eof()) {
            cout<<ch;
        }

        ifile.close();

    }

    return 0;
}