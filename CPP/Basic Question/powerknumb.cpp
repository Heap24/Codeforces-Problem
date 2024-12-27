#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 

    while (t--) {
        long long n, k; 
        cin >> n >> k; 

        // If k is 1, the number of operations is simply n
        if (k == 1) {
            cout << n << endl; 
            continue; 
        }

        int operations = 0;
        
        while (n > 0) {
            operations += n % k;  // Add the remainder when n is divided by k
            n /= k;               // Divide n by k
        }
        
        cout << operations << endl; 
    }

    return 0;
}
