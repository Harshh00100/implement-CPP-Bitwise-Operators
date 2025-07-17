// Harsh Kumar
// 24070123146  
// B3
#include <iostream>
using namespace std;
int main() {
    int a=128; //1000000
    int bit_set ,bit_reset, bit_setting,bit_resetting;
    // Setting the 3rd bit (counting from 0)
    cout << "enter the bit which need to be set: ";
    cin >> bit_set;
    cout << "enter the bit which need to be reset: ";
    cin >> bit_reset; 
    bit_setting= a| (1 << bit_set);
    bit_resetting = a & ~(1 << bit_reset);
    cout << "After setting bit " << bit_set << ": " << bit_setting << "\n";
    cout << "After resetting bit " << bit_reset << ": " << bit_resetting << "\n";
    return 0;
}
