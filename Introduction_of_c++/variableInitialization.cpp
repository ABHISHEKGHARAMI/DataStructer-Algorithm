// Here we demonstarte variable initialization in C++.
/*
 There are many ways to intialize a variable in C++.
 1. Direct Initialization: This is the most common way to initialize a variable.
    Example: int x = 10;
 2. Copy Initialization: This is another way to initialize a variable.
    Example: int x(10);
 3. Uniform Initialization: This is a newer way to initialize a variable introduced in C++11.
    Example: int x{10};
 4. List Initialization: This is similar to uniform initialization but allows 
    for initializing multiple variables at once.
    Example: int x{10}, y{20}, z{30};
// 5. Aggregate Initialization: This is used to initialize arrays or structs.   
    Example: int arr[3] = {1, 2, 3}; or struct Point { int x, y; } p{1, 2};
 6. Default Initialization: This is used to initialize a variable without any value.
    Example: int x; // x is uninitialized
 7. Value Initialization: This initializes a variable to zero.
    Example: int x{}; // x is initialized to 0
 8. Zero Initialization: This initializes a variable to zero.
    Example: int x = 0; // x is initialized to 0
 9. Constant Initialization: This is used to initialize a constant variable.
    Example: const int x = 10; // x is a constant variable initialized to 10
10. Static Initialization: This is used to initialize a static variable.
    Example: static int x = 10; // x is a static variable initialized to 10
// 11. Dynamic Initialization: This is used to initialize a variable at runtime.
    Example: int* p = new int(10); // p is a pointer to an integer initialized to 10
// 12. Reference Initialization: This is used to initialize a reference variable.
    Example: int x = 10; int& ref = x; // ref is a reference to x
// 13. Type Deduction Initialization: This is used to initialize a variable using auto keyword.
    Example: auto x = 10; // x is deduced to be of type int
// 14. Template Initialization: This is used to initialize a variable using templates.
    Example: template<typename T> T init(T value) { return value; } int x = init(10); // x is initialized to 10
// 15. Function Initialization: This is used to initialize a variable using a function.
    Example: int init() { return 10; } int x = init(); // x is initialized to 10
// 16. Lambda Initialization: This is used to initialize a variable using a lambda function.
    Example: auto x = []() { return 10; }(); // x is initialized to 10
// 17. Aggregate Initialization with Nested Structures: This is used to initialize nested structures.
    Example: struct Point { int x, y; } p{1, 2}; struct Rectangle { Point topLeft, bottomRight; } rect{{0, 0}, {10, 10}}; // rect is initialized with nested structures
// 18. Aggregate Initialization with Arrays: This is used to initialize arrays with multiple dimensions.
    Example: int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; // arr is a 2D array initialized with values
// 19. Aggregate Initialization with Classes: This is used to initialize classes with member variables.
//    Example: class Point { public: int x, y; } p{1, 2}; // p is a class initialized to 1 and 2
// 20. Aggregate Initialization with Unions: This is used to initialize unions with member variables.
//    Example: union Data { int i; float f; } data{10}; // data is a union initialized to 10
// 21. Aggregate Initialization with Enums: This is used to initialize enums with values.
//    Example: enum Color { RED, GREEN, BLUE } color = RED; // color is an enum initialized to RED
// 22. Aggregate Initialization with Bitfields: This is used to initialize bitfields in structures.
*/
// main program to demonstrate variable initialization in C++
#include<iostream>
using namespace std;
int main(){
    // Direct Initialization
    int a  = 10; // Direct initialization of variable a
    cout << "Direct Initialization: " << a << endl;
    // Copy Initialization
    int b(20);  // Copy initialization of variable b
    cout << "Copy Initialization: " << b << endl;
    // Uniform Initialization
    int c{30};  // Uniform initialization of variable c
    cout << "Uniform Initialization: " << c << endl;
    // List Initialization
    int d{40}, e{50}, f{60}; // List initialization of variables d, e, and f
    cout << "List Initialization: " << d << ", " << e << ", " << f << endl;
    // Default Initialization
    int g; // Default initialization of variable g (uninitialized)
    cout << "Default Initialization (uninitialized): " << g << endl; // Note: g may contain garbage value
    // Value Initialization
    int h{}; // Value initialization of variable h (initialized to 0)
    cout << "Value Initialization: " << h << endl; // h is initialized to 0
    // Zero Initialization
    int i = 0; // Zero initialization of variable i (initialized to 0)
    cout << "Zero Initialization: " << i << endl; // i is initialized to 0
    // Constant Initialization
    const int j = 70; // Constant initialization of variable j
    cout << "Constant Initialization: " << j << endl; // j is a constant variable initialized to 70
    // Static Initialization
    static int k = 80; // Static initialization of variable k
    cout << "Static Initialization: " << k << endl; // k is a static variable initialized to 80
    // Dynamic Initialization
    int* p = new int(90); // Dynamic initialization of variable p
    cout << "Dynamic Initialization: " << *p << endl; // p is a pointer to an integer initialized to 90
    delete p; // Free the dynamically allocated memory
    // Reference Initialization
    int x = 100; // Initialize variable x
    int& ref = x; // Reference initialization of variable ref
    cout << "Reference Initialization: " << ref << endl; // ref is a reference to x, so it prints 100
    // Type Deduction Initialization
    auto y = 110; // Type deduction initialization of variable y
    cout << "Type Deduction Initialization: " << y << endl; // y is deduced to be of type int, so it prints 110
    // Template Initialization
    auto init = [](auto value) { return value; }; // Lambda function for template initialization
    int z = init(120); // Template initialization of variable z
    cout << "Template Initialization: " << z << endl; // z is initialized to 120
    // Function Initialization
    auto initFunc = []() { return 130; }; // Lambda function for function initialization
    int w = initFunc(); // Function initialization of variable w
    cout << "Function Initialization: " << w << endl; // w is initialized to 130
    // Lambda Initialization
    auto lambdaInit = []() { return 140; }; // Lambda function for lambda initialization
    int v = lambdaInit(); // Lambda initialization of variable v
    cout << "Lambda Initialization: " << v << endl; // v is initialized to 140
    // Aggregate Initialization with Nested Structures
    struct Point { int x, y; };
    Point p1{1, 2}; // Aggregate initialization of Point structure p1
    struct Rectangle { Point topLeft, bottomRight; };
    Rectangle rect{{0, 0}, {10, 10}}; // Aggregate initialization of Rectangle structure rect
    cout << "Aggregate Initialization with Nested Structures: "
         << "Rectangle TopLeft(" << rect.topLeft.x << ", " << rect.topLeft.y << "), "
         << "BottomRight(" << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;
    // Aggregate Initialization with Arrays
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Aggregate initialization of a 2D array
    cout << "Aggregate Initialization with Arrays: " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0; // End the program successfully
}