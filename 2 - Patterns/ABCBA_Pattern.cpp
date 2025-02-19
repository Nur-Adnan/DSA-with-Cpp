#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Length: ";
    cin >> n;
    /* first print this
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
    /*
        for(int row = 0; row < n; row++){
            for(int col = 0; col < row + 1; col++){
                cout << col + 1 << " ";
            }
            cout << endl;
        }
    */
    /* 2nd print this
        A
        A B
        A B C
        A B C D
        A B C D E
    */
    /*
        for(int row = 0; row < n; row++){
            char ch = 'A' - 1; //ASCII 64 initialize
            for(int col = 0; col < row + 1; col++){
                ch++;
                cout << ch << " ";
            }
            cout << endl;
        }
    */
    for(int row = 0; row < n; row++){
        char ch = 'A';
        for(int col = 0; col < row + 1; col++){
            cout << ch << " ";
            ch++;
        }
        //E
        ch--;
        while(ch > 'A'){
            ch--;
            cout << ch << " "; //D, C, B, A
        }
        cout << endl;
    }
}