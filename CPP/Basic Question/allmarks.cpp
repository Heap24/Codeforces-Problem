#include <bits/stdc++.h>
using namespace std;

int main(){

//take input of all subject number
int fir,sec,thi,fou,fif;
cout<<"Enter first subject number: ";
cin>>fir;
cout<<"Enter second subject number: ";
cin>>sec;
cout<<"Enter third subject number: ";
cin>>thi;
cout<<"Enter fourth subject number: ";
cin>>fou;
cout<<"Enter fifth subject number: ";
cin>>fif;

//finding total of all subject
int total = fir + sec + thi + fou + fif ; // adding all subject marks

// finding average of all subject 
int avg = total / 5; // dividing  by 5

//finding percentage 
int perct = (total / 500.0) * 100; // for percentage 

cout<<"The total is: "<<total <<endl;
cout<<"The average is: "<<avg<<endl;
cout<<"The percentage is: "<<perct<<"%"<<endl;

return 0;


}