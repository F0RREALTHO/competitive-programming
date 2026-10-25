// Codeforces: https://codeforces.com/contest/1968/A
// Problem: Maximize?
// Submission: https://codeforces.com/contest/1968/submission/277165903
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-19T10:54:47.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int b_y=1;
        int n=0;
        cin>>x;

        for(int y = 1; y<x; y++)
        {
            int m = gcd(x,y)+y;
            if (m>n)
            {
                n = m;
                b_y = y;
            }
            
        }
        
        cout<<b_y<<endl;
    }
        
    
    
}


