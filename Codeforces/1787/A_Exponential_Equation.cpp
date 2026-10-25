// Codeforces: https://codeforces.com/contest/1787/A
// Problem: Exponential Equation
// Submission: https://codeforces.com/contest/1787/submission/278014948
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-25T09:40:23.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;

        if (n%2!=0)
        {
            cout<< -1 <<endl;
            continue;
        }
        

        else cout<< 1 << " " << n/2 << endl;
    }
    
    
}
