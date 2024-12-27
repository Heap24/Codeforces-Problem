#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    if( n==1){
        cout<<"NO"<<endl;
    }
    else if( n >= 2){
        if( n % 2 == 0){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    return 0;
}