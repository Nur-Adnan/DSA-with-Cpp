#include <iostream>
using namespace std;
int main(){
    // 0 0 0 0 0 1 0 1 -> 5
    // 0 0 0 0 0 0 1 1 -> 3
    // --------------------
    // 0 0 0 0 0 0 0 1 -> 1           
    cout << (5 & 3) << endl;
    //output -> 1

    // 0 0 0 0 0 1 0 1 -> 5
    // 0 0 0 0 0 0 1 1 -> 3
    // --------------------
    // 0 0 0 0 0 1 1 1 -> 7   
    cout << (5 | 3) << endl;
    //output 7

    // 0 0 0 0 0 1 0 1 -> 5
    // 1 1 1 1 1 0 1 0
    //             + 1
    // --------------------
    // 0 0 0 0 0 1 1 0 -> 1 + 1 = 2 that's binary form 0010
    // -6
    cout << ~(5) << endl;
    cout << (5^5^9) << endl;
    // Left shit
    // 25 * 2 to the power n
    // that means here 2 to the power 1
    cout << (25 << 1) << endl;
    // that means here 2 to the power 2
    cout << (25 << 2) << endl;

    return 0;
}