// here in the program we learn about the literals and variable of the c++ . 
// through the program
#include<iostream>
using namespace std;
int main(){
    // Literals are those valuses which are used to represent the fixed values in the program
    // like the constants
    int a = 10; // integer literal
    float b = 10.5; // floating point literal
    char c = 'A'; // character literal
    bool d = true; // boolean literal
    string e = "Hello"; // string literal
    // we can also use the hexadecimal and octal literals
    int hex = 0x1A; // hexadecimal literal
    int oct = 012; // octal literal
    cout << "Integer Literal:" << a << "\ttype is: " << typeid(a).name() << '\n';
    return 0;
}
