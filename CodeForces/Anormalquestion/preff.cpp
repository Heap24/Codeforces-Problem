#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    vector<int>v(n);
    
    for(auto &it : v)cin>>it;
    
    vector<int>pref_sum(n);
    
    pref_sum[0]=v[0];
    for( int i = 1 ; i<n ;i++)
    {
        pref_sum[i]=pref_sum[i-1] + v[i];
    }
    
    int q;
    cin>>q;
    
    while(q--)
    {
        int l , r;
        cin>>l>>r;
        
        cout<<pref_sum[r] - ((l==0) ? 0 : pref_sum[l-1])<<" ";
    }
}

int main()
{
    solve();
}