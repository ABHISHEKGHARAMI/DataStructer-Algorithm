// find the factorial of a given  number
#include<iostream>
using namespace std;
int main(){
    //  user input for the number
    int number;
    cout << "enter number for fact :";
    cin >> number;
    long int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        // logic
        fact *= i;
    }
    cout << "\nfactorial of the number :" << number << " is : "<< fact;
    return 0;
}