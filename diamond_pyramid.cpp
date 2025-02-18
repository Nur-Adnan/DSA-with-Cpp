#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Length: ";
    cin >> n;
    //first
    for(int row = 0; row < n; row++){
        // space
        for(int col = 0; col < n - row - 1; col++){
            cout << " ";
        }
        //start
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    // second
    for(int row = 0; row < n; row++){
        //spaces
        for(int col = 0; col < row; col++){
            cout << " ";
        }
        // starts
        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}