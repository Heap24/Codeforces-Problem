#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n;

    int k = 0 ;

    for( int row = 1 ; row <= 2*n-1  ; row ++){
    
      ( row <= n )? k++ : k--;
      
        for ( int col = 1 ; col <= 2*n-1  ; col ++){

            if ( col >= n - k && col <= n-2+k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
    }
    cout<<endl;
}
}