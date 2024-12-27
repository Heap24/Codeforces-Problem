#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for( int row =1 ; row <= n ; row++){
        
        for ( int col = 1 ; col <= 2 * n - 1 ; col++){
            
            if ( col >= n + 1 - row && col <= n - 1 + row ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}