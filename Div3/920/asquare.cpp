#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,d,e,f,g,h;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;

        int ans ;
        
        if(a!=c){
        ans = max(a,c) - min(a,c);}
        else{
              ans = max(a,g) - min(a,g);
        }

        cout<<(ans)*(ans)<<endl;

    }
}