#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for( int i =1  ; i<=n ; i++ ){
        
        int x , y ;
        cin>>x>>y;
        
        if( x == 0 || y == 0){
            cout<<"0"<<endl;
        }
        else{
            if( x > y){
                swap(x,y);
            }
                int sum = 0;
                for( int i = x+1 ; i< y ; i++){
                    if( i % 2 != 0){
                        sum+=i;
                    }
                }
                cout<<sum<<endl;
            }
        }
    }
