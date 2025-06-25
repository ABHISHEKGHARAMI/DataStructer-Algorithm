// write a function to return to square of a number
#include<iostream>
#include<math.h>
using namespace std;
inline int square(int n){
    int mul = 1;
    if(n == 0){
        return 1;
    }else{
        for (int i = 1; i < n; i++)
        {
            mul = mul * n;
        }
        return mul;
    }
    
}
int main(){
    // function call to get a square
    int n;
    cout << "enter the number for sqaure : ";
    cin >> n;
    cout << "the square of number : " << n << " is : " << square(n);
    return 0;
}