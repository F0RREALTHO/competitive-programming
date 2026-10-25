// Codeforces: https://codeforces.com/contest/2010/A
// Problem: Alternating Sum of Numbers
// Submission: https://codeforces.com/contest/2010/submission/279456607
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-03T10:45:53.000Z
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

        int arr[n];
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (i%2 == 0)
            {
                arr[i]=-arr[i];
            }

            sum = sum + arr[i];
            
        }

        cout<<-sum<<endl;
        
        
    }
    
}
