// Codeforces: https://codeforces.com/contest/2050/C
// Problem: Uninteresting Number
// Submission: https://codeforces.com/contest/2050/submission/295073684
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-05T16:15:27.000Z
// Rating: 1200
    #include <bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
    using namespace std;

    #define ll long long
    #define ld long double
    #define pll pair<ll,ll>
    #define lcm(a,b) (a*(b/__gcd(a,b)))
    #define max3(a,b,c) max(a,max(b,c))
    #define min3(a,b,c) min(a,min(b,c))
    #define all(a) (a).begin(),(a).end()
    #define F first
    #define S second
    #define rep(i,j,k) for(ll i=j;i<k;i++)
    #define rrep(i,j,k) for(ll i=j;i>=k;i--)
    #define oset tree <ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
    #define omset tree <pll, null_type,less<pll>, rb_tree_tag,tree_order_statistics_node_update>
    #define endl "\n"
    const ll MOD= 1e9+7;
    const ll N=1e5+7;

    bool div9(string &n) {
        ll length = n.length();
        vector<vector<bool>> dp(length + 1, vector<bool>(9, false));
        dp[length][0] = true;

        rrep(i, length - 1, 0) {
            ll digit = n[i] - '0';
            ll squared = digit * digit;

            rep(mod, 0, 9) {
                if (dp[i + 1][mod]) {
                    dp[i][(mod + digit) % 9] = true;
                    if (squared < 10) {
                        dp[i][(mod + squared) % 9] = true;
                    }
                }
            }
        }

        return dp[0][0];
    }

    void solve() {
        string n;
        cin >> n;

        if (div9(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        ll t;
        cin >> t;
        while (t--) {
            solve();
        }

        return 0;
    }
