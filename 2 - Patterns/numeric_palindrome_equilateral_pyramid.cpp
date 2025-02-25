#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Length: ";
    cin >> n;
    int k = n;
    for(int row = 0; row < n; row++){
        int c = 1;
        for(int col = 0; col < k; col++){
            if(col < n - row - 1){
            // 5 - 0 - 1 = 4
            // 5 - 1 - 1 = 3
            // 5 - 2 - 1 = 2
            // 5 - 3 - 1 = 1
            // 5 - 4 - 1 = 0
                cout << " ";
            }else if(col <= n - 1){
                // 0 <= 5 - 1 means 4
                // 1, 2, 3, 4
                cout << c;
                c++;
            }else if(col == n){
                // 3 - 2 = 1
                // 4 - 2 = 2
                // 5 - 2 = 3
                // 6 - 2 = 4
                c = c - 2;
                cout << c;
                c--;
            }else{
                cout << c;
                c--;
            }
        }
        k++;
        cout << endl;
    }
}