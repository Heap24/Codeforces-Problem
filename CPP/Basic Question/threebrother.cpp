#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int a , b ;
    cin>>a>>b; //taking input from user
    
    for(int i = 1 ; i <=3 ; i++){
        
        //checking the brother who is late 
        
        if ( i != a && i !=b ){
            cout<<i<<endl;
            break;
        }
        
        
    }
}
