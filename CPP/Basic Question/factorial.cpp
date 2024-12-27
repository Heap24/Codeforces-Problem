#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;

    int i = 1;
    while (  i <= n){
        int number ;
        cin>>number;

           long long sum = 1;
            for( int i = 1 ; i<= number;i++){
              sum *=i;
            }
        cout<<sum;
    }
    
    return 0;
}