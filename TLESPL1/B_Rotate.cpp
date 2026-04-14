#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int A[n][n];
    int B[n][n];
    
    for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    for(int j = 0; j < n; j++){
        A[i][j] = s[j] - '0';
    }
}

    
    if(n == 1){
        cout << A[0][0] << "\n";
        return 0;
    }
    for (int j = 1; j < n; j++)
        B[0][j] = A[0][j-1];
    
    for(int i = 0; i < n-1; i++)
        B[i][0] = A[i+1][0];
    
    for (int i = 1; i < n; i++)
        B[i][n-1] = A[i-1][n-1];
    
    for (int j = 0; j < n-1; j++)
        B[n-1][j] = A[n-1][j+1];
    
    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < n-1; j++){
            B[i][j] = A[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            cout << B[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}