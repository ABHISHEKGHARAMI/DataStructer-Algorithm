// Write a function void modify(int a) which sets a = a * 2. Check if the change reflects in main().
#include<iostream>
using namespace std;
void modify(int a){
    a = a * 2;
}
int main(){
    int a ;
    cout << "enter the value to test the call by value : ";
    cin >> a;
    modify(a);
    cout << a ; 
    return 0;
}