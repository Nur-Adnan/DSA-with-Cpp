#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Length: ";
    cin >> n;
    for(int row = 0; row < n; row++){
        // spaces
        for(int col = 0; col < row; col++){
            cout << " ";
        }
        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}