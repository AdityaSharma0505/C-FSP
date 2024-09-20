#include <iostream>
using namespace std;
/*
Here, we want to throw exception (a random number as exception) if the age of the person is less than 18.
*/
int main()
{
   try
   {
      int age = 13;
      if (age >= 18)
      {
         cout << "Access granted.";
      }
      else
      {
         // throwing any random value as exception as age is less than 18.
         throw 505;
      }
   }
   // Catching the thrown exception and displaying access denied!
   catch (...)
   {
      cout << "Access denied! You need to be at least 18 years old." << endl;
   }
   return 0;
}
