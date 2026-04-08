#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
        int a,b;
        string s;

        cin >> a >> s >> b;

        if (s== "<")
        {
            if (a<b)
            cout << "Right";
            else
            cout << "Wrong";
        }

        else if(s== ">"){
            if (a>b)
            cout << "Right";
            else
            cout << "Wrong";
        }

        else{
            if (a==b)
            cout << "Right";
            else 
            cout << "Wrong";
        } 

        return 0;
}