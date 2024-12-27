#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n ;
    cin>>n;
    long long origninal = n;
    long long  k = 0;
    while(n > 0){

        long long h = n % 10;
        k = k * 10 + h;
            n = n/10;
    }

    if ( k == origninal){
        cout<<k<<endl;
        cout<<"YES";
    }
    else{
        cout<<k<<endl;
        cout<<"NO";
    }
    
}
