// Question : sum of the nu natural number
#include<iostream>
using namespace std;
int main(){
    //  user input
    int number;
    long int sum = 0;
    cout << "Enter the number for want to sum";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        sum+= i;
    }
    cout << "\nThe sum of the natural number is : " << sum;
    return 0;
}