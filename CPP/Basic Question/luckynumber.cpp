#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int m , n;
    
    cin>>m>>n;
    
    bool lucky = false ;
    bool lucky1 = false;
    
    for ( int i = m ; i <= n ;i++){
        
        int h = i ; 
        while( h>0){
            
            int yes = h % 10 ;
            
            if( yes == 4 || yes == 7){
                lucky = true ;
            }
            else{
                lucky = false ;
                break;
            }
            h /= 10;
        }
        if ( lucky == true){
            cout<<i<<" ";
            lucky1 = true;
        }
    }
    if( lucky1 == false){
        cout<<"-1";
    }
}