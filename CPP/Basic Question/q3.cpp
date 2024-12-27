#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>& A) {
    int N = A.size();
    int maxSum = INT_MIN;

    // Top-left to bottom-right diagonals
    for (int start = 0; start < N; start++) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i + start < N; i++) {
            sum1 += A[i][i + start]; // Diagonals starting from row 0
            sum2 += A[start + i][i]; // Diagonals starting from column 0
        }
        maxSum = max(maxSum, max(sum1, sum2));
    }

    // Top-right to bottom-left diagonals
    for (int start = 0; start < N; start++) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i + start < N; i++) {
            sum1 += A[i][N - 1 - (i + start)]; // Diagonals starting from row 0
            sum2 += A[start + i][N - 1 - i];   // Diagonals starting from column N-1
        }
        maxSum = max(maxSum, max(sum1, sum2));
    }

    // Additional diagonals starting from the middle of the matrix
    for (int start = 1; start < N; start++) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i + start < N; i++) {
            sum1 += A[start + i][i]; // Diagonals starting from row start
            sum2 += A[i][start + i]; // Diagonals starting from column start
        }
        maxSum = max(maxSum, max(sum1, sum2));
    }

    return maxSum;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    cout << solve(A);
}