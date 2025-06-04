// here we learn about the operators in c++
#include<iostream>
using namespace std;
int main(){
    // in math where operation is performed in between the two number like 2 + 3 = 5
    // 2 and 3 are called the operands and '+' is the operator
    // here we learn about the different type of the operators
    /*
      1. unary operator : it takes only single operator like +5 or -3 like that
      2. Binary operator : it takes two operands like 2 + 3 or 4 - 5 like that
      3. Ternary operator : it takes three operands like (a > b) ? a : b; 
         here the condition is a > b and if it is true then it will return a else it will return b
      4. Assignment operator : it is used to assign the value to the variable like a = 5 or b = 10
      5. Arithmetic operator : it is used to perform the arithmetic operation like +, -, *, /, % 
         like a + b or a - b or a * b or a / b or a % b
      6. Relational operator : it is used to compare the two values like a > b or a < b or a == b or a != b
      7. Logical operator : it is used to perform the logical operation like &&, ||, ! 
         like a && b or a || b or !a
      8. Bitwise operator : it is used to perform the bitwise operation like &, |, ^, ~, <<, >>
      9. Increment and Decrement operator : it is used to increment or decrement the value of the variable by 1 like ++a or --b
      10. Sizeof operator : it is used to find the size of the variable in bytes like sizeof(a) or sizeof(b)
      11. Typeid operator : it is used to find the type of the variable like typeid(a) or typeid(b)
      12. Comma operator : it is used to separate the two expressions like a = (b = 5, b + 2) 
         here b will be assigned the value 5 and then b + 2 will be assigned to a
      13. Pointer operator : it is used to access the value of the pointer like *ptr or &ptr
      14. Member access operator : it is used to access the member of the class or structure like obj.member or ptr->member
      15. Scope resolution operator : it is used to access the global variable or function like ::a or ::func()
      16. New and Delete operator : it is used to allocate and deallocate the memory dynamically like new int or delete ptr
      17. Type casting operator : it is used to convert the data type of the variable like (int)a or (float)b
      18. Conditional operator : it is used to perform the conditional operation like (a > b) ? a : b 
         here if a is greater than b then it will return a else it will return b        
    */
    //  Unary operator
    int a = 5;
    cout << "Unary operator:\n";
    cout << "Value of a: " << a << "\n";
    cout << "Unary plus: " << +a << "\n"; // Unary plus
    cout << "Unary minus: " << -a << "\n"; // Unary minus
    cout << "Increment operator: " << ++a << "\n"; // Pre-increment
    cout << "Decrement operator: " << --a << "\n"; // Pre-decrement
    cout << "Post-increment operator: " << a++ << "\n"; // Post-increment
    cout << "Post-decrement operator: " << a-- << "\n"; // Post-decrement
    cout << "Value of a after post-increment and post-decrement: " << a << "\n\n";
    // Binary operator
    int b = 10, c = 20;
    cout << "Binary operator:\n";
    cout << "Addition: " << (b + c) << "\n"; // Addition
    cout << "Subtraction: " << (b - c) << "\n"; // Subtraction
    cout << "Multiplication: " << (b * c) << "\n"; // Multiplication
    cout << "Division: " << (b / c) << "\n"; // Division
    cout << "Modulus: " << (b % c) << "\n"; // Modulus
    // Ternary operator
    cout << "Ternary operator:\n";
    cout << "Max of b and c: " << ((b > c)? b : c ) << "\n"; // ternary operator
    // Assignment operator
    int d = 30;
    cout << "Assignment operator:\n";
    cout << "Value of d: " << d << "\n"; // Assignment
    d += 10; // Add and assign
    cout << "Value of d after += 10: " << d << "\n"; // Add and assign
    d -= 5; // Subtract and assign
    cout << "Value of d after -= 5: " << d << "\n"; // Subtract and assign
    d *= 2; // Multiply and assign
    cout << "Value of d after *= 2: " << d << "\n"; // Multiply and assign
    d /= 3; // Divide and assign
    cout << "Value of d after /= 3: " << d << "\n"; // Divide and assign
    d %= 4; // Modulus and assign
    cout << "Value of d after %= 4: " << d << "\n\n"; // Modulus and assign
    // Relational operator
    cout << "Relational operator:\n";
    cout << "b > c: " << (b > c) << "\n"; // Greater than
    cout << "b < c: " << (b < c) << "\n"; // Less than
    cout << "b == c: " << (b == c) << "\n"; // Equal to
    cout << "b != c: " << (b != c) << "\n"; // Not equal to
    cout << "b >= c: " << (b >= c) << "\n"; // Greater than or equal to
    cout << "b <= c: " << (b <= c) << "\n\n"; // Less than or equal to
    // Logical operator
    cout << "Logical operator:\n";
    cout << "b && c: " << (b && c) << "\n"; // Logical AND
    cout << "b || c: " << (b || c) << "\n"; // Logical OR
    cout << "!b: " << (!b) << "\n"; // Logical NOT
    // Bitwise operator
    cout << "Bitwise operator:\n";
    cout << "b & c: " << (b & c) << "\n"; // Bitwise AND
    cout << "b | c: " << (b | c) << "\n"; // Bitwise OR
    cout << "b ^ c: " << (b ^ c) << "\n"; // Bitwise XOR
    cout << "~b: " << (~b) << "\n"; // Bitwise NOT
    cout << "b << 2: " << (b << 2) << "\n"; // Left shift
    cout << "b >> 2: " << (b >> 2) << "\n\n"; // Right shift
    // Increment and Decrement operator
    cout << "Increment and Decrement operator:\n";
    cout << "Value of b before increment: " << b << "\n";
    cout << "Value of b after pre-increment: " << ++b << "\n"; // Pre-increment
    cout << "Value of b after post-increment: " << b++ << "\n"; // Post-increment
    cout << "Value of b after post-increment: " << b << "\n"; // Value after post-increment
    cout << "Value of b after pre-decrement: " << --b << "\n"; // Pre-decrement
    cout << "Value of b after post-decrement: " << b-- << "\n"; // Post-decrement
    cout << "Value of b after post-decrement: " << b << "\n\n"; // Value after post-decrement
    // Sizeof operator
    cout << "Sizeof operator:\n";
    cout << "Size of int: " << sizeof(int) << " bytes\n"; // Size of int
    cout << "Size of float: " << sizeof(float) << " bytes\n"; // Size of float
    cout << "Size of double: " << sizeof(double) << " bytes\n"; // Size of double
    cout << "Size of char: " << sizeof(char) << " bytes\n"; // Size of char
    cout << "Size of bool: " << sizeof(bool) << " bytes\n"; // Size of bool         
    return 0;
}