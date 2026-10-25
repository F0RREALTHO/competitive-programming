// Codeforces: https://codeforces.com/contest/1742/A
// Problem: Sum
// Submission: https://codeforces.com/contest/1742/submission/278632427
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-29T12:07:55.000Z
// Rating: 800
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if (a == b+c)
        {
            cout << "YES" << endl;
        }

        else if (b == a+c)
        {
            cout << "YES" << endl;
        }

        else if (c == b+a)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
        
        
        
        
    }
    
}
