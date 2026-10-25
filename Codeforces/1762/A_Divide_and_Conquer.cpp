// Codeforces: https://codeforces.com/contest/1762/A
// Problem: Divide and Conquer
// Submission: https://codeforces.com/contest/1762/submission/278516908
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-28T13:37:44.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        
        if (sum % 2 == 0) {
            cout << 0 << endl;
            continue;
        }

        int min_operations = INT_MAX;

       
        for (int i = 0; i < n; i++) {
            int num = arr[i];
            int operations = 0;

            
            while (num % 2 == 0) {
                num /= 2;
                operations++;
            }

            if (arr[i] % 2 != 0) {
                int temp = arr[i];
                while (temp % 2 != 0) {
                    temp /= 2;
                    operations++;
                }
            }


            min_operations = min(min_operations, operations);
        }

        cout << min_operations << endl;
    }

    return 0;
}
