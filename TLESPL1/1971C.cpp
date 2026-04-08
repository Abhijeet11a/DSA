#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;

        cin >> a >> b >> c >> d;

        int intersect=0;

        int Li, Ui;
        Li= min(a,b);
        Ui= max(a,b);

        for (int i =Li ; i<= Ui ; i++)
        {
           if (c==i || d==i)
           intersect++;
        }
        if (intersect==1)
        cout << "YES" << "\n";

        else 
        cout << "NO" << "\n";
    }


    return 0;
}