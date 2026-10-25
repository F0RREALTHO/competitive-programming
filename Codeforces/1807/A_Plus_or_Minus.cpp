// Codeforces: https://codeforces.com/contest/1807/A
// Problem: Plus or Minus
// Submission: https://codeforces.com/contest/1807/submission/277628408
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-22T09:17:41.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if (a+b==c)
        {
            cout<<"+"<<endl;
        }
        
        else
        {
            cout<<"-"<<endl;
        }
    }
    
}
