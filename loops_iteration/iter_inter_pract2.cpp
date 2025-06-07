// Question : Check a number is pallindrome or not
// Approach : first count the digit of the number the loop from the both side
//  if unmatch raise the flag then declare it is not the pallindrome
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int countDigit(int number){
    int count = 0 ;
    int rem;
    while (number != 0)
    {
        rem = number %10;
        number/=10;
        count++;
    }
    return count;
}
int reverseNumber(int number){
    int rem;
    int sum = 0;
    while (number != 0)
    {
        rem = number % 10;
        sum = 10 * sum + rem ;
        number /= 10 ;
    }
    return sum;
}
bool checkPallindrome(int number){
    int rnumber = reverseNumber(number);
    if (number == rnumber)
    {
        return true;
    }else{
        return false;
    }
    
}
int main(){
    int number;
    cout << "enter a number to check it it is pallindrome :" ;
    cin >> number ;
    bool des = checkPallindrome(number) ;
    if (des == true)
    {
        cout << "\n" << number << " is a pallindrome number" ;
    }
    else{
        cout << "\n" << number << "is not a pallindrome number";
    }
    
    return 0;
}