#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    while (true) {
      
        cin >> n >> m;

        
        if (n <= 0 || m <= 0) {
            break;
        }

    
        if (n > m) {
            swap(n, m);
        }

        
        int sum = 0;
        for (int i = n; i <= m; i++) {
            cout << i << " "; 
            sum += i;
        }

        
        cout << "sum =" << sum << endl;
    }

    return 0;
}