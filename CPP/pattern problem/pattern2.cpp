#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int k = 0;

    for (int row = 1; row <= 2 * n - 1; row++) {
        (row <= n) ? k++ : k--;

        for (int col = 1; col <= n; col++) {
            if (col <= k) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}