#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        char k = 'A';  // Reset k to 'A' for every new row

        for (int col = 1; col <= 2 * n - 1; col++) {
            if (col <= n + 1 - row || col >= n - 1 + row) {
                cout << k;

                if (col < n) {
                    k++;  // Increment k on the left half
                } else {
                    k--;  // Decrement k on the right half
                }
            } else {
                cout << " ";  // Print spaces in between
            }
        }
        cout << endl;
    }

    return 0;
}

