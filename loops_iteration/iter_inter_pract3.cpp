// Question : Print the fibonacci number of a certain number
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
// print the fibonacci number for a certain number
void printFibo(int n){
    int a = 0, b = 1;
    int c ;
    for (int i = 0; i <= n; i++)
    {
        // here goes to logic for the fibonacci
        cout << "\t" << a;
        c = a;
        a = b;
        b = c + a;
    }
    
}
int main(){
    // main function
    int n;
    cout << "\nenter the number want to print the fibonacci number : ";
    cin >> n ;
    printFibo(n);
    return 0;
}