#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void InsertInBtw (vector<int> &A, int i){
    int x= A[i];
    int y=A[i+1];
    
    if(x<y){
    for(int j=x+1; j<y ; j++){
      A.insert(A.begin() + i +1, j);
      i++;
    }
}

    else {
        for(int j=x-1 ;j>y ;j--){
        A.insert(A.begin()+ i + 1, j);
        i++;
    }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
     cin >> n;

        vector<int> A(n);
        for(int i = 0; i < n; i++) cin >> A[i];

    while(true) {

    bool all_good = true;

    for(int i = 0; i < A.size() - 1; i++) {

        if(abs(A[i] - A[i+1]) != 1) {

            all_good = false;

            InsertInBtw(A, i);

            break; 
        }
    }

    if(all_good) break;  
}

    for (int j=0;j<A.size();j++)
    cout << A[j] << " ";

    return 0;
}