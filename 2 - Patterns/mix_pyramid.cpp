#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the length: ";
    cin >> n;
    // Part - 1
    for(int row = 0; row < n; row++){
        //starts
        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }
        //spaces
        for(int col = 0; col < 2 * row + 1; col++){
            cout << "  ";
        }
        //starts
        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    //part - 2
    for(int row = 0; row < n; row++){
        //starts
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        //spaces
        for(int col = 0; col < 2 * (n - row) - 1; col++){
            cout << "  ";
        }
        //starts
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    } 
}