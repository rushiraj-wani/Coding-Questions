#include<iostream>
using namespace std;

int main(){
    cout << "Bitwise & (AND) Rules: \n";
    cout << " 0 & 0 -> 0 \n 0 & 1 -> 0 \n 1 & 0 -> 0 \n 1 & 1 -> 1 \n";
    cout << "Bitwise & (AND): (4: 0100 & 8: 1000 -> 0000(0)) ->" << (4 & 8) << "\n \n";

    cout << "Bitwise | (OR) Rules: \n";
    cout << " 0 | 0 -> 0 \n 0 | 1 -> 1 \n 1 | 0 -> 1 \n 1 | 1 -> 1 \n";
    cout << "Bitwise | (OR): (4: 0100 | 8: 1000 -> 1100 (12)) ->" << (4 | 8) << "\n \n";

    cout << "Bitwise ^ (XOR) Rules: \n";
    cout << " 0 ^ 0 -> 0 \n 0 ^ 1 -> 1 \n 1 ^ 0 -> 1 \n 1 ^ 1 -> 0 \n";
    cout << "Bitwise ^ (XOR): (4: 0100 ^ 8: 1000 -> 1100(12)) ->" << (4 ^ 8) << "\n \n";

    cout << "Bitwise << (Left Shift) Rules: \n";
    cout << "n << i -> shift left i times. (remaining spc is filled with 0) \n";
    cout << "ans: n*2^b \n";
    cout << "n:4(100), i:2 -> 10000(16) -> " << (4 << 2) << "\n";
    cout << "n:10(1010), i:3 -> 1010000(80) -> " << (10 << 3) << "\n \n";

    cout << "Bitwise >> (Right Shift) Rules: \n";
    cout << "n >> i -> shift right i times. (remaining spc is filled with 0 & last will removed) \n";
    cout << "ans = n/2^b \n";
    cout << "n:4(100), i:2 -> 001(1)-> " << (4 >> 2) << "\n";
    cout << "n:8(1000), i:2 ->  0010(2)-> " << (8 >> 2) << "\n \n";

    return 0;
}