#include <iostream>
using namespace std;

int main() {
    int salary = 50000;
    int hardwork = 10; 
    int bonus = 2000;

    for (int i = 5; i > 0; --i) { 
        if (hardwork > 8) {
            salary += bonus; 
        } else if (hardwork > 5) {
            salary += 1000; 
        } else {
            salary -= 500; 
        }
        hardwork--;
        bonus -= 200; 
    }

    cout << "Final Salary: " << salary << endl;
    return 0;
}
