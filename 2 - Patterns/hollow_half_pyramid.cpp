#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the length" << endl;
    cin >> n;
    // for(int row = 0; row < n; row++){
    //     int totalCol = row + 1;
    //     for(int col = 0; col < totalCol; col++){
    //         if(row == 0 || row == 1 || row == n - 1){
    //             cout << "* ";
    //         }else{
    //             if(col == 0 || col == totalCol -1){
    //                 cout << "* ";
    //             }else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    // optimization
    for(int row = 0; row < n; row++){
        int totalCol = row + 1;
        for(int col = 0; col < totalCol; col++){
            if(row == 0 || row == 1 || row == n - 1 || col == 0 || row == col){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}