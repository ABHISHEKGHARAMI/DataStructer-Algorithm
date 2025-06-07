// Question : Check a number is pallindrome or not
// Question added : Check a string is pallindrome or not
// Approach : first count the digit of the number the loop from the both side
//  if unmatch raise the flag then declare it is not the pallindrome number
#include<iostream>
#include<cmath>
#include<string>
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
// function to check the string is pallindrome or not
bool checkStringPallindrome(string str1){
    int i = 0;
    int j = str1.length() - 1;
    int flag = 0;
    while (i <= j)
    {
        if (str1[i] != str1[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if (flag == 1)
    {
        return false;
    }else{
        return true;
    }
    
    
}
int main(){
    int number;
    bool desc;
    int options;
    string str1;
    do{
    //  menu options
    cout << "options for pallindrome" ;
    cout << "\n 1: check for number.";
    cout << "\n 2: check for string." ;
    cout << "\n 0: for exit." ; 
    cout << "\n enter the option:" ;
    cin >> options;
    switch (options)
    {
    case 1:
        cout << "enter a number to check it it is pallindrome :";
        cin >> number;
        if (checkPallindrome(number) == true)
        {
            cout << number << "\t is pallindrome number";
        }else{
            cout << number << "\t is not a pallindrome number";
        }
        
        break;
    case 2:
        cout << "enter the string to check it is pallindrome or not :";
        cin >> str1;
        if (checkStringPallindrome(str1) == true)
        {
            cout << str1 << "\t is a pallindrome";
        }else{
            cout << str1 << "\t is not a pallindrome";
        }
        break;
    
    case 0:
       cout << "exiting the program , good-bye....";
       break;
        
    
    default:
        cout << "wrong options...";
    }
    }while(options !=0);
    
    return 0;
}