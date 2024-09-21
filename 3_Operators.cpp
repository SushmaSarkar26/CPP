#include<iostream>
using namespace std;

int main() {

    // Unary Operators

    int a = 10;
    int b = 15;

    cout << a++ << endl;    // post increment operators
    cout << ++a << endl;    // pre increment operators
    cout << b-- << endl;    // Post Decrement operators
    cout << --b << endl;    // pre Decrement operators



    ////// Binary Operators



    //// Arithmetic Operators
    
    // Addition operator
    cout << "a + b = " << (a + b) << endl;
   
    // Subtraction operator
    cout << "a - b = " << (a - b) << endl;
   
    // Multiplication operator
    cout << "a * b = " << (a * b) << endl;
   
    // Division operator
    cout << "a / b = " << (a / b) << endl;
   
    // Modulo operator
    cout << "a % b = " << (a % b) << endl;



    //// Relational Operators

    // Equal to operator
    cout << "a == b is " << (a == b) << endl;
   
    // Greater than operator
    cout << "a > b is " << (a > b) << endl;
   
    // Greater than or Equal to operator
    cout << "a >= b is " << (a >= b) << endl;
   
    //  Lesser than operator
    cout << "a < b is " << (a < b) << endl;
   
    // Lesser than or Equal to operator
    cout << "a <= b is " << (a <= b) << endl;
   
    // true
    cout << "a != b is " << (a != b) << endl;



    //// Logical Operators

    // Logical AND operator
    cout << (65>34 && 78>95);
    cout << "a && b is " << (a && b) << endl;
   
    // Logical OR operator
    cout << "a || b is " << (a || b) << endl;
   
    // Logical NOT operator
    cout << "!b is " << (!b) << endl;



    //// Bitwise Operators

    
    // Binary AND operator
    cout << "a & b is " << (a & b) << endl;
 
    // Binary OR operator
    cout << "a | b is " << (a | b) << endl;
 
    // Binary XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;
 
    // Left Shift operator
    cout << "a<<1 is " << (a << 1) << endl;
 
    // Right Shift operator
    cout << "a>>1 is " << (a >> 1) << endl;
 
    // One’s Complement operator
    cout << "~(a) is " << ~(a) << endl;



    //// Assignment Operators

   
    //  Add and Assignment Operator
    cout << "a += b is " << (a += b) << endl;
   
    // Subtract and Assignment Operator
    cout << "a -= b is " << (a -= b) << endl;
   
    //  Multiply and Assignment Operator
    cout << "a *= b is " << (a *= b) << endl;
   
    //  Divide and Assignment Operator
    cout << "a /= b is " << (a /= b) << endl;



    //// Ternary or Conditional Operators(?:)

    
    // Conditional Operator
    int result = (a < b) ? b : a;
    cout << "The greatest number is " << result << endl;

}