// Codeforces: https://codeforces.com/contest/1837/B
// Problem: Comparison String
// Submission: https://codeforces.com/contest/1837/submission/280947369
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-13T07:02:44.000Z
// Rating: 900
#include <iostream>
#include <string>

using namespace std;

int minCost(const string& s) {
    int longest_streak = 1, current_streak = 1;
    
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            current_streak++;
        } else {
            current_streak = 1;
        }
        longest_streak = max(longest_streak, current_streak);
    }
    
    return longest_streak + 1;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        
        cin >> n >> s;
        
        int result = minCost(s);
        cout << result << endl;
    }
    
    return 0;
}
