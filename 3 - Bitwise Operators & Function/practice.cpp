#include <iostream>
using namespace std;
int main(){
    // 0 0 0 0 0 1 0 1 -> 5
    // 0 0 0 0 0 0 1 1 -> 3
    // --------------------
    // 0 0 0 0 0 0 0 1 -> 1           
    cout << (5 & 3) << endl;
    //output -> 1
    return 0;
}