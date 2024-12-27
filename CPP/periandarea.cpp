#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare variables for the dimensions of the rectangle
    int length, breadth, height;

    // Prompt the user to enter the dimensions
    cout << "Enter the length, breadth, and height of the rectangle: ";
    cin >> length >> breadth >> height;

    // Calculate the perimeter of the rectangle (ignoring height)
    int perimeter = 2 * (length + breadth);  // Corrected perimeter formula

    // Calculate the area of the rectangle (ignoring height)
    int area = length * breadth;  // Area formula

    // Display the results
    cout << "The Perimeter of the Rectangle: " << perimeter << endl;
    cout << "The Area of the Rectangle:      " << area << endl;

    return 0;
}
