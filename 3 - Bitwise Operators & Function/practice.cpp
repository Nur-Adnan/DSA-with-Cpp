#include <iostream>
using namespace std;

void printTwoTable(int n){
    for(int i = 1; i <= 10; i++){
        cout << n * i << endl;
    }
}

int calculatePower(int a, int b){
    int ans = 1;
    for(int i = 1; i <= b; i++){
        // 1 * 5
        // 5 * 5
        ans = ans * a;
    }
    return ans;
}


int calculateTotalSum (int a, int l, int n){
    int ans = ((n)*(a+l))/2;
    return ans;
}

bool isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

void printEvenInsideRange(int start, int end){
    for(int i = start; i <= end; i++){
        int n = i;
        // n & 1 = odd
        // !(n & 1) = even
        if(!(n & 1)){
            cout << n << endl;
        }
    }
}


float calculatePercentage(int sb1, int sb2, int sb3, int sb4, int sb5){
    int sum = sb1 + sb2 + sb3 + sb4 + sb5;
    int totalMarks = 500;

    float percentage = (sum * 100.0) / totalMarks;
    return percentage;
}



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
    // right shift
    // here, it's divided with 2^n
    // that means -1000 / 2^n
    cout << ((-1000) >> 1) << endl;
    /* 
        bitwise even odd condtion's, if use &
        after the last bit 0 then it's even and if 
        the last bit 1 then it's odd.
    */
    // let's check
    /*
    int n = 11;
    if( (n & 1) == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    */
    //normally people use it like that way
    int n = 10;
    if(n & 1){
        cout << "Odd Number";
    }else{
        cout << "Even Number";
    }
    cout << endl;

    // set bit -> Like 5 - 00000101 - here all the 1's are set bit

    int number = 4;
    int setBitCount  = 0;
    while(number != 0){
        int lastBit = (number & 1);
        if(lastBit == 1){
            setBitCount = setBitCount + 1;
        }
        //right shift
        number = number >> 1;
    }
    cout << "Total Set Bits : " << setBitCount << endl;

    printTwoTable(5);
    int finalAns = calculatePower(5, 2);
    cout << finalAns << endl;

    int calCulateSum = calculateTotalSum(2, 10, 5);
    cout << calCulateSum << endl;

    bool primeAns = isPrime(11);
    if(primeAns == true){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
    printEvenInsideRange(101, 123);

    cout << "Total: " << calculatePercentage(95, 95, 95, 99, 88) << endl;

    return 0;
}