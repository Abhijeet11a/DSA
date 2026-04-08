#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arr[5];
    int freq [14] = {0};
    int count2=0 , count3=0;
    for(int i=0; i< 5 ; i++)
    cin >> arr[i];
    
    for (int i=0; i<5 ; i++){
      freq[arr[i]]++;
    }
    
    for(int i=1 ; i<=13 ; i++){
      if(freq[i] == 2) count2++;
      
      if(freq[i]==3) count3++;
    }
    
    if(count2==1 && count3 == 1)
    cout << "Yes" << "\n";
    
    else
    cout << "No" << "\n";

    return 0;
}