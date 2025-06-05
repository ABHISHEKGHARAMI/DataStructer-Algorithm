// here we learn about the ternary operator of the program 
// what we discuss about the operator section in in the introduction of the c++
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    // now here we use the ternary operator
    int a,b;
    cout << "enter the two integer :";
    cin >> a >> b;
    int c ;
    c = (a >b) ? a : b;
    cout << "After the checking the the greater number is :"<<"\t" << c;
    return 0;
}