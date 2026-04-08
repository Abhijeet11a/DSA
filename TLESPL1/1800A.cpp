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

        int n;
        cin >> n;

        string s;
        cin >> s;

        string order = "meow";
bool valid = true;

int previous_state = -1;

for (int i = 0; i < s.length(); i++)
{
    char ch = tolower(s[i]);

    int current_state = order.find(ch);

    if (current_state == string::npos)   
    {
        valid = false;
        break;
    }

    if (i == 0)
    {
        if (current_state != 0)          
        {
            valid = false;
            break;
        }
    }
    else
    {
        if (current_state == previous_state)
        {
            
        }
        else if (current_state == previous_state + 1)
        {
            
        }
        else
        {
            valid = false;
            break;
        }
    }

    previous_state = current_state;
}

if (!valid || previous_state != 3)
    cout << "NO\n";
else
    cout << "YES\n";
    }

    return 0;
}