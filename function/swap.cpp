// write a function swap two numbers using the pointer
#include<iostream>
#include<algorithm>
using namespace std;
void swap(int *a,int *b){
    *a = *a + *b ;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    // user 2 number
    int a,b;
    cout << "enter the 2 number to swap : ";
    cin >> a >> b;
    swap(&a,&b);
    cout << "After that swap the 2 number will be : ";
    cout << a << b ;
    return 0;
}