// Harsh Kumar
// 24070123146  
// B3
#include <iostream>
using namespace std;
int main() { 
    int a=10, b=14; // Initialize two integer variables   1010 and 1110 in binary
    int A = a&b; // Bitwise AND operation
    int B = a|b; // Bitwise OR operation    
    int C = a^b; // Bitwise XOR operation
    int nA = ~a; // Bitwise NOT operation
    int nB = ~b; // Bitwise NOT operation
    int sA = a<<1; // Left shift operation
    int sB = b<<1; 
    int rA = a>>1; // Right shift operation 
    int rB = b>>1; 
    // Displaying the results of bitwise operations
    cout << "Bitwise AND: " << A << "\n";
    cout << "Bitwise OR: " << B << "\n";
    cout << "Bitwise XOR: " << C << "\n";   
    cout << "Bitwise NOT of a: " << nA << "\n";
    cout << "Bitwise NOT of b: " << nB << "\n";
    cout << "Left shift of a: " << sA << "\n";
    cout << "Left shift of b: " << sB << "\n";
    cout << "Right shift of a: " << rA << "\n";
    cout << "Right shift of b: " << rB << "\n";
    return 0; 
}

/*output:
Bitwise AND: 10
Bitwise OR: 14
Bitwise XOR: 4
Bitwise NOT of a: -11
Bitwise NOT of b: -15
Left shift of a: 20
Left shift of b: 28
Right shift of a: 5
Right shift of b: 7
    */
