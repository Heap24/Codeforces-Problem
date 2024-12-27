#include <bits/stdc++.h>
using namespace std;

void prime( int num){
    
    bool primey = false;
    if ( num == 1){
        cout<<"YES"<<endl;
    }
    for ( int i = 2 ; i<num ; i++){
        if( num % i == 0){
         primey = true ;
         break;
        }
    }
    if( primey == false){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    
    int n ;
    cin>>n;
    
    for( int i =1 ; i<=n ;i++){
        
        int num ;
        cin>>num;
        
        prime(num);
    }
}