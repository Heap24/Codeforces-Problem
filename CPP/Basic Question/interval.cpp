#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long a , b, c , d;
    cin>>a>>b>>c>>d;
    
    if(c>=a && c<=b){
        cout<<c<<" "<<b;
    }
    else{
        cout<<"-1";
    }
}