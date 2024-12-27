#include <bits/stdc++.h>
using namespace std;

int main() {
    // Define input variables
    long long a, b, c, d;
    
    // Read input values
    cin >> a >> b >> c >> d;

    // Define modulo value
    const int MOD = 100;

    // Perform multiplication with modulo to avoid overflow
    long long ans = a % MOD;
    ans = (ans * (b % MOD)) % MOD;
    ans = (ans * (c % MOD)) % MOD;
    ans = (ans * (d % MOD)) % MOD;

    // Output result, ensuring it's always two digits
    cout << setw(2) << setfill('0') << ans << endl;

    return 0;
}
