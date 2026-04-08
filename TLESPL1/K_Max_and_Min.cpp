#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
        long a,b,c;
        int mn, mx;
        cin >> a >> b >> c;

        if (a<=b && a<=c)
        mn=a;
        else if (b<=a && b<=c)
        mn=b;
        else
        mn=c;

        if(a>=b && a>=c)
        mx=a;
        else if(b>=a && b>=c)
        mx=b;
        else
        mx=c;

        cout << mn <<" " << mx;


    return 0;
}