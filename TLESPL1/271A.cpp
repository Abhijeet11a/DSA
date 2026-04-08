#include <bits/stdc++.h>
using namespace std;

bool distinctdigicheck(int x) {
    set<int> s;

    while(x > 0) {
        int digit = x % 10;
        s.insert(digit);
        x /= 10;
    }

    return s.size() == 4;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

     int year, n;
    cin >> year;
    n=year+1;
    while (true)
    {

      if(distinctdigicheck(n)){
      cout << n;
      break;
      }
      else
      n++;   
    }

    return 0;
}
