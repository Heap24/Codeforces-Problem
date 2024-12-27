#include <iostream>
using namespace std;

int main() {
    int password;

    while (cin >> password) {
        if (password == 1999) {
            cout << "Correct" << endl;
            return 0;  // Terminate the program
        } else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
