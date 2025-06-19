// print the following pattern
/*
  ****
   ***
  ****
   ***
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of rows : ";
    cin >> n ;
    for (int i = 0; i < n ; i++)
    {
        // overall loop
        if (i%2 != 0)
        {
            // checking the loop
            cout << " ";
        }
        for (int j = 0; j < n ; j++)
        {
            // printing the *
            cout << "* ";
        }
        cout << "\n";
    }
    
    return 0;
}