#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int h;
    cin>>h;
    int s;
    cin>>s;
    int sum=0;
    
    for( int i = 0 ; i<=h ; i++){
        
        for( int k = 0 ; k<=h ;k++){
            
            for( int j =0 ; j<=h ; j++){
                if( i + j + k == s){
                    sum+=1;
                }
            }
        }
    }
    cout<<sum;
    
}