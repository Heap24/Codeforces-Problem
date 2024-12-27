#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num % 2 == 0 && num != 2) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b, sum = 0;
    cout << "Enter the range (a and b): ";
    cin >> a >> b;

    if (a > b) {
        cout << "Invalid range!" << endl;
        return 1;
    }

    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            sum += i;
        }
    }

    if (sum == 0) {
        cout << "No prime numbers found in the given range." << endl;
    } else {
        cout << "\nSum of prime numbers in the range: " << sum << endl;
    }

    return 0;
}
