#include <iostream>
#include <string>
using namespace std;

int main() {
string country;
cout << "Enter a country: ";
cin >> country;

int population = 0;
if (country == "United States") {
population = 331;
} else if (country == "China") {
population = 1441;
} else if (country == "India") {
population = 1391;
} else if (country == "Brazil") {
population = 213;
} else if (country == "Russia") {
population = 144;
}

if (population == 0) {
cout << "Country not in the list" << endl;
}  
else if (population > 50) {
cout << country << " has a population above 50 million." << endl;
     
} 
else  {
cout << country << " has a population below 50 million." << endl;
}

return 0;
}