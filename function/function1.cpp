// function are the set of the instruction that to be executed in the order for performing the certain task
/*
 function syntax for the c++ is
  return_type(int,char,void,bool) function_name(argument){
    // instruction to set for performing the certain task
    // either return or nothing depend on the return type
  }
*/

#include<iostream>
// using the libary function for the algorithms
#include<algorithm>
using namespace std;
// first there no return type of function
void display(){
    cout << "displaying the function\n";
}
//  second there return type of function
float simpleInterest(float p,float r,float t){
    float si;
    si = (p * r * t)/100;
    return si;
}
int main(){
    float p,r,t;
    display();
    cout << "enter the principal , rate of interest, time:";
    cin >> p >> r >> t;
    float si ;
    si = simpleInterest(p,r,t);
    cout << "The simple interest is : " <<"\t" << si;
    int a,b;
    cout << "\nenter two integer numbers:\n";
    cin >> a >> b;
    cout << "\nthe max of the " << a << " and " << b <<" is :" << max(a,b);
    return 0;
}