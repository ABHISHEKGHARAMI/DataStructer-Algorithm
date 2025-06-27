// call by reference for the call by value function previously
#include<iostream>
using namespace std;
void modify(int &a){
    a = a * 2;
}
int main(){
    int n;
    cout << "enter number to check :";
    cin >> n ; 
    modify(n);
    cout << "after modifing the value will be  : "<<n;
    return 0;
}