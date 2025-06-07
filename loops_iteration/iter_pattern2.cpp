// Question : Print the pattern for pyramid
/*
     1
    1 2
   1 2 3
  1 2 3 4
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    // user input
    int n;
    cout << "\nEnter the input : ";
    cin >> n;
    // here goes the logic
    int i , j ,k ;
    // for overall loop
    for(i=0;i<n;i++){
        // space loop
        for(j=0;j < n-i-1;j++){
            cout << " ";
        }
        // print the number
        for(k=0;k<=i;k++){
            cout << k+1<<"\t";
        }
        cout << "\n";
    }
    return 0;
}