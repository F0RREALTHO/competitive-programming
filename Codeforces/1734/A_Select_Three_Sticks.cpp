// Codeforces: https://codeforces.com/contest/1734/A
// Problem: Select Three Sticks
// Submission: https://codeforces.com/contest/1734/submission/278745385
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-30T10:03:55.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int nums[n];

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>nums[i];
        }

        sort(nums,nums+n);
        for (int i = 2; i < n; i++)
        {
            ans = min(ans, nums[i]-nums[i-2]);
        }

        cout << ans << endl;
    }
    
}
