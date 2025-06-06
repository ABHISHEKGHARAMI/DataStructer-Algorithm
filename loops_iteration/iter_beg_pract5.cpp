// Question : count the digit of a number
#include<iostream>
using namespace std;
int main(){
    int number,rem;
    int count = 0;
    cout<< "Program for counting the digit of a number :";
    cout << "\nenter the number for counting the digit:";
    cin >> number;
    while (number!=0)
    {
        rem = number % 10;
        number/=10;
        count++;
    }
    cout << "the number has digit of :" << count;
    
    return 0;
}