// Codeforces: https://codeforces.com/contest/1980/A
// Problem: Problem Generator
// Submission: https://codeforces.com/contest/1980/submission/277159895
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-19T09:57:18.000Z
// Rating: 800
#include <iostream>
using namespace std;

int main() {
    int t, n, m;
    string s;  
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> n >> m>> s;
        
        int list[7] = {0};  

        for (int j = 0; j < n; j++) {
            if (s[j] == 'A') list[0]++;
            else if (s[j] == 'B') list[1]++;
            else if (s[j] == 'C') list[2]++;
            else if (s[j] == 'D') list[3]++;
            else if (s[j] == 'E') list[4]++;
            else if (s[j] == 'F') list[5]++;
            else if (s[j] == 'G') list[6]++;
        }
       
        int pr = 0;

        
        for (int j = 0; j < 7; j++) {
            if (list[j] < m) {
                pr += m - list[j];
            }
        }
        
        cout << pr << endl;
    }

    return 0;
}
