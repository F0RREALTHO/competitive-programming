// Codeforces: https://codeforces.com/contest/1999/A
// Problem: A+B Again?
// Submission: https://codeforces.com/contest/1999/submission/276968645
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-17T18:30:40.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

// Given a two-digit positive integer n
// , find the sum of its digits
// 1e8
int main()
{
    int t;
    cin>>t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        cout<<(s[0]-'0')+(s[1]-'0')<<endl;
    }
}
