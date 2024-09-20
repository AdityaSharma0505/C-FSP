#include <fstream>
#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    //writing the file
    ofstream ofile;
    ofile.open("sample.txt", ios::app);

    ofile << str <<endl;

    ofile.close();

    //reading the file
    ifstream ifile;
    ifile.open("sample.txt");

    if(ifile.is_open()){
        char ch;
        while(!ifile.eof()){
            ch = ifile.get();
            cout << ch;
        }
        
        ifile.close();
    }
    

    return 0;
}