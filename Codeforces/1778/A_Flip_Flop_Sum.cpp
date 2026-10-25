// Codeforces: https://codeforces.com/contest/1778/A
// Problem: Flip Flop Sum
// Submission: https://codeforces.com/contest/1778/submission/278247447
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-26T11:38:37.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> num(n);
        int sum = 0;
        bool adjusted = false;

        for (int j = 0; j < n; j++)
        {
            cin >> num[j];
            sum += num[j];
        }

        
        if (sum == n)
        {
            cout << sum - 4 << endl;
            continue;
        }

        for (int j = 0; j < n - 1; j++) 
        {
            if (num[j] == -1 && num[j + 1] == -1)
            {
                cout << sum + 4 << endl; 
                adjusted = true;
                break;
            }
        }

        if (adjusted) continue;

        if (n==2 && num[0]==1 && num[1]==1)
        {
            cout << -2 << endl;
        }

        for (int j = 0; j < n - 1; j++) 
        {
            if (num[j] != num[j + 1])
            {
                cout << sum << endl; 
                adjusted = true;
                break;
            }
        } 

        if (!adjusted)
        {
            cout << sum << endl;
        }
    }

    return 0;
}
