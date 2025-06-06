// Question : reverse a given number
#include<iostream>
using namespace std;
int main(){
    int number;
    int sum = 0 ;
    int rem;
    cout << "enter a number for reversing it :";
    cin >> number;
    while (number != 0)
    {
        rem = number % 10;
        sum = sum * 10 + rem;
        number /= 10;
    }
    cout << "After reversing the given number : " << sum;
    return 0;
}