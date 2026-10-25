// Codeforces: https://codeforces.com/contest/1971/A
// Problem: My First Sorting Problem
// Submission: https://codeforces.com/contest/1971/submission/277161736
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-19T10:14:37.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
    
}
