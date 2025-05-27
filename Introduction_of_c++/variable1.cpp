// This is a program for demonstarting the use for the variables in C++.
#include<iostream>
#include<math.h>
#define PI 3.14 // defined the constant PI
using namespace std;
int main(){
    float radius; // Declare a variable tp hold the radius of the circle
    cout << "Enter the radius of the circle: "; // prompt for the user to enter the radius
    cin >> radius; // Read the radius of the circle from the user
    float area = PI * radius * radius; // Calculate the area of the circle using the formula area = π * r^2
    cout << "The area of the circle is : " << area << endl; // Output the area of the circle;
    return 0; // end the program successfully
}