#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    
     int n;
    
     cin >> n;

    int x[n]; 
    int y[n];

    
    for(int i = 0; i < n; i++) {
        cin >> x[i];
        cin >> y[i];
    }

     for(int i = 0; i < n; i++) {
        
        if (y[i] < -1)
         cout << "NO" << "\n";
        
         else
         cout << "YES" << "\n";
    }


    


    return 0;
}