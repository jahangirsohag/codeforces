#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// // Checks if kth bit of x is set (1) or not (0)
// int check_kth_bit(int x, int k) {
//   return (x >> k) & 1;
// }

// // Prints the positions of all set (1) bits in binary representation of x
// void print_on_bits(int x) {
//   for (int k = 0; k < 32; k++) {
//     if (check_kth_bit(x, k)) {
//       cout << k << ' '; // prints the position of the set bit
//     }
//   }
//   cout << '\n';
// }
// // Returns the count of set (1) bits in binary representation of x
// int count_on_bits(int x) {
//   int ans = 0;
//   for (int k = 0; k < 32; k++) {
//     if (check_kth_bit(x, k)) {
//       ans++;
//     }
//   }
//   return ans;
// }

// // Checks if x is even or odd
// bool is_even(int x) {
//   if (x & 1) {
//     return false;
//   }
//   else {
//     return true;
//   }
// }

// // Sets the kth bit of x to 1 and returns the result
// int set_kth_bit(int x, int k) {
//   return x | (1 << k);
// }

// // Sets the kth bit of x to 0 and returns the result
// int unset_kth_bit(int x, int k) {
//   return x & (~(1 << k));
// }

// // Toggles the kth bit of x and returns the result
// int toggle_kth_bit(int x, int k) {
//   return x ^ (1 << k);
// }

// // Checks if x is a power of 2
// bool check_power_of_2(int x) {
//   return count_on_bits(x) == 1;
// }
int main() {
    // Bitwise AND (&)
    // int and_result=12&25;
    // bitset<8> bits1=12;
    // bitset<8> bits2=25;
    // bitset<8> bits3=and_result;
    // cout << bits1 << endl;
    // cout << bits2 << endl;
    // cout << "----------" << endl;
    // cout << bits3 << endl;
    // cout << "AND result: " << and_result << endl;

    // Bitwise OR (|)
    // int or_result=12|25;
    // bitset<8> bits1=12;
    // bitset<8> bits2=25;
    // bitset<8> bits3=or_result;
    // cout << bits1 << endl;
    // cout << bits2 << endl;
    // cout << "----------" << endl;
    // cout << bits3 << endl;
    // cout << "OR result: " << or_result << endl;

    // Bitwise XOR (^)
    // int xor_result=12^25;
    // bitset<8> bits1=12;
    // bitset<8> bits2=25;
    // bitset<8> bits3=xor_result;
    // cout << bits1 << endl;
    // cout << bits2 << endl;
    // cout << "----------" << endl;
    // cout << bits3 << endl;
    // cout << "XOR result: " << xor_result << endl;

    // //Bitwise NOT (~)
    // int not_result=~12;
    // bitset<8> bits1=12;
    // bitset<8> bits3=not_result;
    // cout << bits1 << endl;
    // cout << "----------" << endl;
    // cout << bits3 << endl;
    // cout << "NOT result: " << not_result << endl;

    // // Left shift (<<)
    // int left_shift_result=3<<2;
    // bitset<8> bits=left_shift_result;
    // cout << bits << endl;
    // cout << "left_shift_result: " << left_shift_result << endl;

    // // Right shift (<<)
    // int right_shift_result=12>>2;
    // bitset<8> bits=right_shift_result;
    // cout << bits << endl;
    // cout << "left_shift_result: " << right_shift_result << endl;

    // // Difference between 1 << x and 1LL << x
    // int x=31;
    // long long res1=1<<x;
    // long long res2=1LL << x;
    // bitset<32> bit1=res1;
    // bitset<32>bit2=res2;
    // cout << bit1 << endl;
    // cout << bit2 << endl;
    // cout << "1 << x result: " << res1 << endl;
    // cout << "1LL << x result: " << res2 << endl;

    // int x=11; // binary representation: 1011

    // cout << "check 2nd bit of 11: " << check_kth_bit(x,2) << endl;

    // cout << "Set bits in 11 are at positions: ";
    // print_on_bits(x); // Output: 0 1 3
    // cout << "Number of set bits in 11: " << count_on_bits(x) << '\n'; // Output: 3
    // cout << "Is 11 even? " << is_even(x) << '\n'; // Output: 0 (false)
    // cout << "11 after setting 2nd bit: " << set_kth_bit(x, 2) << '\n'; // Output: 15
    // cout << "15 after unsetting 2nd bit: " << unset_kth_bit(15, 2) << '\n'; // Output: 11
    // cout << "11 after toggling 3rd bit: " << toggle_kth_bit(x, 3) << '\n'; // Output: 3
    // cout << "Is 8 a power of 2: " << check_power_of_2(8) << '\n'; // Output: 1 (true)

    return 0;
}