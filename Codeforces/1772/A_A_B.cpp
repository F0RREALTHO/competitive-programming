// Codeforces: https://codeforces.com/contest/1772/A
// Problem: A+B?
// Submission: https://codeforces.com/contest/1772/submission/278490103
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-28T09:30:42.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;

        string s1 = s.substr(0);
        int a = stoi(s1);

        string s2 = s.substr(2);
        int b = stoi(s2);

        if (s[1] == '+')
        {
            cout << a + b << endl; 
        }

        else
        {
            cout << a - b << endl;
        }
        
        
    }
    return 0;
    
}
