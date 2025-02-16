#include <iostream>
using namespace std;

int main(){
    // total row = 4;
    // every row -> 4 start
    // row -> outer
    // column -> inner
    for(int row = 0; row < 4; row++){
        //inner loop
        for(int col = 0; col < 4; col++){
            cout << "* " ;
        } 
        cout << endl;
    }
    return 0;
}