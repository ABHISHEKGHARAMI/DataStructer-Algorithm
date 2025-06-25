// write a function for the max number
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int max(int a ,int b){
    return a > b ? a  : b ; 
}
int main(){
    int a,b;
    cout << "enter two number : ";
    cin >> a >> b;
    cout << "the max number is : " << max(a,b);
    return 0;
}