/*
pattern 19:
****
*  *
*  *
****
*/ 

#include <iostream>
using namespace std;

int main() {
    int n = 7;

    for (int i = 1; i <= n; i++) {

        // First row or last row
        if (i == 1 || i == n) {
            for (int j = 1; j <= n; j++) {
                cout << "*";
            }
        }
        // Middle rows
        else {
            cout << "*";

            for (int j = 1; j <= n - 2; j++) {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}