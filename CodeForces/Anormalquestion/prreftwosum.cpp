#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> v(n, vector<int>(m));
    
    // Input the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    
    // Compute the prefix sum matrix
    vector<vector<int>> prefsum(n, vector<int>(m, 0));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            prefsum[i][j] = v[i][j]; // Start with the current cell
            
            if (j > 0) // Add left cell
            {
                prefsum[i][j] += prefsum[i][j-1];
            }
            if (i > 0) // Add top cell
            {
                prefsum[i][j] += prefsum[i-1][j];
            }
            if (i > 0 && j > 0) // Remove top-left overlap
            {
                prefsum[i][j] -= prefsum[i-1][j-1];
            }
        }
    }
    
    int q;
    cin >> q;
    
    // Answer each query
    while (q--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        // Convert to 0-based indexing
        l1--, r1--, l2--, r2--;

        int ans = prefsum[l2][r2]; // Bottom-right corner of the submatrix
        
        if (l1 > 0)`
        {
            ans -= prefsum[l1-1][r2]; // Remove area above the submatrix
        }
        if (r1 > 0)
        {
            ans -= prefsum[l2][r1-1]; // Remove area left of the submatrix
        }
        if (l1 > 0 && r1 > 0)
        {
            ans += prefsum[l1-1][r1-1]; // Add back the top-left overlap
        }

        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}
