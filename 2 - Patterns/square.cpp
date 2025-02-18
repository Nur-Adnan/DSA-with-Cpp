#include <iostream>
using namespace std;

int main(){
    // total row = 4;
    // every row -> 4 start
    // row -> outer
    // column -> inner
    int length, width;
    cout << "Enter the Length" << endl;
    cin >> length;
    cout << "Enter width" << endl;
    cin >> width;

    for(int row = 0; row < length; row++){
        //inner loop
        for(int col = 0; col < width; col++){
            cout << "* " ;
        } 
        cout << endl;
    }
    return 0;
}