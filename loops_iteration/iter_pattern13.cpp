// print the following pattern
/*

   ****
   *  *
   *  *
   ****

*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    // take user input
    int n;
    cout << "enter the number for diamond box : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if(i == 0 || i == n - 1){
                cout << "*";
            }else{
                if(j == 0 || j==n-1){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout <<"\n";
    }
    return 0;
    
}