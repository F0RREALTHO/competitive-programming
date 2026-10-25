// Codeforces: https://codeforces.com/contest/1921/A
// Problem: Square
// Submission: https://codeforces.com/contest/1921/submission/277168281
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-19T11:16:24.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int square(int a)
{
    int s;
    s = a*a;
    return s;
}


int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        if (x1==x4) cout<<square(y4-y1)<<endl;
        else if (x1==x3) cout<<square(y3-y1)<<endl;
        else cout<<square(y2-y1)<<endl;
        

    }
    
}
