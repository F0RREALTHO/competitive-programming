// Codeforces: https://codeforces.com/contest/1999/A
// Problem: A+B Again?
// Submission: https://codeforces.com/contest/1999/submission/276967698
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-17T18:22:50.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

// Given a two-digit positive integer n
// , find the sum of its digits
int main()
{
    int t,n;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int a = n%10;
        int b = n/10;

        cout<<(a+b)<<endl;
    }
    


}
