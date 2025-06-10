// Question 7 : print the following pattern
/*
   *
   **
  ***
 ****
*/
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int main(){
   // user input
   int n ; 
   cout << "enter the number : ";
   cin >> n ; 
   for (int i = 0; i < n; i++)
   {
      //  overall loop
      for (int k = 0; k < n - i - 1; k++)
      {
         // print the space
         cout << " ";
      }
      
      for (int j = 0; j <= i ; j++)
      {
         // for the *
         cout << "*";
      }
      cout << "\n";
   }
   
}