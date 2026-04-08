#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Lc=0, Uc=0;
    string s;
    cin >> s;

    for(char &c : s)
    {
        if (c >= 'A' && c <= 'Z')
        Uc++;
        
        else if(c >= 'a' && c<= 'z')
        Lc++;

    }

    if (Lc>=Uc)
    {
        for (char &c : s)
        {
            if (c >= 'A' && c <= 'Z')
            {
              c = c+ 32;
            }
        }

        cout << s;
    }

    else
    {
        for (char &c : s)
        {
            if (c >= 'a' && c <= 'z')
            {
              c = c - 32;
            }
        }

        cout << s;
    }

    return 0;
}