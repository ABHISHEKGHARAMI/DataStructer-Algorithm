// print a right aligned triangle for the console
/*
   *
  **
 ***
****
*/
// logic for the space and print the console
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
   // pattern for right aligned triangle
   int n;
   // user input for pattern
   cout << "\nEnter the range of the console : \n";
   cin >> n;
   int i,j,k;
   for ( i = 0; i < n; i++)
   {
      // print the space for the console
      for ( j = n - i -1; j >= 0; j--)
      {
         // print the space
         cout << " ";
      }
      
      // print the pattern for the user
      for ( k = 0; k <= i ; k++)
      {
         cout << "*" ;
      }
      cout << "\n";
   }
   
   return 0;
}