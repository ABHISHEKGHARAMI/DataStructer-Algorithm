// write a function for the factorial for the non recursive way
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int fact(int n){
    int f1 = 1;
    if(n == 0 || n == 1){
        return 1;
    }else{
        for (int i = 1; i <= n ; i++)
        {
            f1 = f1 * i;
        }
        return f1;
    }
}
int main(){
    // user input for the number
    int n ; 
    cout << "enter the number for the n : ";
    cin >> n ;
    cout << "factorial of "<< n <<"  is : " <<  fact(n);
    return 0;
}