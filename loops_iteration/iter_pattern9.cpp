// Question 9 : print the floyd's triangle for like
/*

1
2 3
4 5 6
7 8 9 10

*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout << "enter the number lines want to print : ";
    cin >> n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count <<" ";
            count++ ;
        }
        cout << "\n";
    }
    
    return 0 ;
}