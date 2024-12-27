#include <iostream>
using namespace std;

void eq(int x, int n) {
    int eqsum = 0;  
    int power = 1;  

    for (int i = 2; i <= n; i += 2) {
        power = power * x * x;  
        eqsum += power;         
    }

    cout << eqsum << endl;
}

int main() {
    int x, n;
    cin >> x >> n;

    eq(x, n);

    return 0;
}
