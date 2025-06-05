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
#include<cmath>
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
// default parameter for the  function
double defaultParameter(int x,int y=3){
  return pow(x,y);
}
// but this is for the Ologn for the pow function
long long firstPow(int base,int exp){
  long long result = 1;
  while (exp > 0)
  {
    if (exp%2 == 1)
    {
      result*=base;
    }
    base *= base;
    exp = exp / 2;
  }
  return result;
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
    // observe the default parameter for the function
    cout << "Showing the default parameter:\t" << defaultParameter(b);
    cout << "Showing the fastest power for the long integer:";
    long long d;
    d = firstPow(a,b);
    cout << "The Fastest power of "<<"\t"<<a <<"\tof the\t"<<b <<"\tis\t"<<"is : "<<d;
    return 0;
}