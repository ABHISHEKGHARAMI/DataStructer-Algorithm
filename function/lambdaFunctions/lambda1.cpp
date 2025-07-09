// here we learn about the lambda function that are used in the stl for singular use
// so this is the basically the anonymous function in c++ it is used in specific case so we do not need its name
// like basic function
#include<iostream>
using namespace std;
int main(){
    auto increment = [](int x){
        return x + 5;
    };
  cout << increment(5);
  return 0;
}