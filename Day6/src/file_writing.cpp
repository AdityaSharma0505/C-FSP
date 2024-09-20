#include <fstream>
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    // By default, it will be opened in normal write mode, which is ios::out.
    //ofstream myfile("sample.txt"); //normal mode
    ofstream myfile("sample.txt", ios_base::app); //append mode
    //ofstream myfile("sample.txt", ios_base::trunc); //truncate mode
    
    myfile << "Hello Everyone \n";
    myfile << "This content was being written from a C++ Program";
    myfile.close();
    return 0;
}