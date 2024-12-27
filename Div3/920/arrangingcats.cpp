#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int box;
        cin>>box;

        string s ,f;
        cin>>s>>f;
        
        int insum = 0;
        for( int i = 0 ; i<box ; i++ )
        {
         if(s[i]=='1' && f[i]=='0')
         {
            insum++;
         }
        }
        int insum1 = 0;
        for( int j = 0 ; j<box ; j++ )
        {
            if(s[j]=='0' && f[j]=='1')
         {
            insum1++;
         }
        }
        cout<<min(insum,insum1) + (max(insum,insum1) - min(insum,insum1))<<endl;
    }
  return 0;
}