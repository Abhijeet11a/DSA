#include <bits/stdc++.h>
using namespace std;


void solve(){
   int n;
   cin>>n;
   if (n%2==1)
   cout << 0 << "\n";
   else 
   cout << (n/4)+1 << "\n" ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
return 0;
}