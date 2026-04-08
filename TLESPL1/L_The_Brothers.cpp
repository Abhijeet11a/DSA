#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
        string Fone,Sone,Ftwo,Stwo; 
        cin >> Fone >> Sone;
        cin >> Ftwo >> Stwo;

        if (Sone==Stwo)
        cout << "ARE Brothers";
        else
        cout << "NOT";

    return 0;
}