// Write a function for the prime number using a statement
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool checkPrime(int n){
    int flag = 0 ;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n > 1)
        {
            if (n % i == 0 )
            {
                flag = 1;
            }
            
        }
        
    }
    if (flag == 1)
    {
        return false;
    }else{
        return true;
    }
    
    
    
}
int main(){
    // user input for the function
    int n ; 
    cout << "enter a number to check the number is prime or not : ";
    cin >> n ;
    if (checkPrime(n) == 1)
    {
       cout << n << " the number is prime number..";
    }else{
        cout << n << " the number is not a prime number ..";
    }
    
    return 0;
}