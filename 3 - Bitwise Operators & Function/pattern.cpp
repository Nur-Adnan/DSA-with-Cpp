#include <iostream>
using namespace std;

/*
    1
    2 3
    4 5 6
    7 8 9 10

*/

/*
    pass by value and pass by referance
    pass by value = copy
    pass by referance = actual value changes
*/

int main(){
    int n;
    cout << "Enter the length: ";
    cin >> n;
    int number = 1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row + 1; col++){
            cout << number;
            number ++ ; 
        }
        cout << endl;
    }

    int age = 15;
    int &demo = age;
    age++;
    cout << "Demo: " << demo << endl;
    cout << "Age: " <<age << endl;
}