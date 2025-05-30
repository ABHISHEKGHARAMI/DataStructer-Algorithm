// This is for the input output operation for the user
#include<iostream>
using namespace std;
int main(){
    // iostream stands for the input output stream
    cout << "Hello world";
    // but if you print the next line here
    cout << "welcome to the c++ world !!";
    // now checkout the newline for the user
    cout << "this is the first line" << endl;
    cout << "this is the second line" << endl;
    cout << "here we use the third line" << endl;
    cout << "this is the fourth line" << endl;
    // typically developer or sde dont use the endl because its causing the system to  slow down
    // because the endl have 2 jobs specifically
    // 1. do the new line
    // 2. second job is the flush the buffer so when we use the  multiple endl will flush the buffer multiple times
    // so we can use the \n instead of endl
    cout << "this is the fifth line\n";
    cout << "this is the sixth line\n";
    // we can also use the \n in the string
    cout << "this is the seventh line\n";
    // we can also use the \n in the string
    cout << "this is the eighth line\n";
    return 0;
}