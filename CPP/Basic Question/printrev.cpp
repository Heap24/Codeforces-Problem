#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for ( int i = 1 ; i <= n ; i++){
        
        int number ;
        cin>>number;
        
        while( number > 0){
            
            int printnum = number % 10 ;
            
            cout<<printnum<<" ";
            number/=10;
            
            
        }
        cout<<endl;
    } 
}