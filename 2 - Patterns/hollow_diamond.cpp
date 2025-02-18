#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Length: ";
    cin >> n;
    // 1st 
    for(int row = 0; row < n; row++){
        // spaces
        for(int col = 0; col < n - row - 1; col++){
            cout << " ";
        }
        //starts
        for(int col = 0; col < row + 1; col++){
            if(row == 0 || col == 0 || col == row + 1 - 1){
                cout << "* ";
            }else{
                cout << "  ";
            } 
        }
    cout << endl;
    }
    // 2nd
    for(int row = 0; row < n; row++){
        //spaces
        for(int col = 0; col < row; col++){
            cout << " ";
        }
        // starts
        for(int col = 0; col < n - row; col++){
            if(row == n - 1 || col == 0 || col == n - row -1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}