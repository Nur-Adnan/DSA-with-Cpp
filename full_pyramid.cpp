#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Length: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        // Printing spaces
        for (int col = 0; col < n - row - 1; col++) {
            cout << " ";
        }
        // Printing stars
        for (int col = 0; col < 2 * row + 1; col++) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
