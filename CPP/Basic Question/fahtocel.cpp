#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input value in Fahrenheit
    int fah;
    cout << "Enter the value of Fahrenheit: ";
    cin >> fah;  // taking input

    // Defining Celsius
    int cel;

    // Converting Fahrenheit to Celsius
    cel = (fah - 32) * 5 / 9;

    // Displaying the result
    cout << "The equivalent Celsius temperature is: " << cel << endl;

    return 0;
}
