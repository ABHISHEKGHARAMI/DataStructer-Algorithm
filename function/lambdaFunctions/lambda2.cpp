// here we learn about the lambda with the reference
#include<iostream>
using namespace std;
int main(){
    auto modify = [&](int x){
    //  here we modify for the reference of the variable
      return x *= 5;
    };
    int x ;
    cout << "enter the value to change the operation for this : ";
    cin >> x ;
    cout << "\n" << modify(x);
    return 0;
}