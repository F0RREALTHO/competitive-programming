// Codeforces: https://codeforces.com/contest/2008/B
// Problem: Square or Not
// Submission: https://codeforces.com/contest/2008/submission/279162226
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-01T15:39:39.000Z
// Rating: 800
#include<bits/stdc++.h>

using namespace std;

bool can_be_square_matrix(const string& s) {
    int n = s.length();
    int side = int(sqrt(n)); 
    
    if (side * side != n) {
        return false;
    }

    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            char current = s[i * side + j];
            if ((i == 0 || i == side - 1 || j == 0 || j == side - 1) && current != '1') {
                return false;
            } else if (i != 0 && i != side - 1 && j != 0 && j != side - 1 && current != '0') {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (can_be_square_matrix(s)) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}
