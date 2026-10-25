// Codeforces: https://codeforces.com/contest/1613/A
// Problem: Long Comparison
// Submission: https://codeforces.com/contest/1613/submission/279946429
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-05T13:36:30.000Z
// Rating: 900
#include<bits/stdc++.h>
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

ll binexp(ll a, ll b, ll MOD = 1e9 + 7)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
        ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return ans;
}

int countDigits(int num) {
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

void forrealtho()
{
    int x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;

    int d1 = countDigits(x1);
    int d2 = countDigits(x2);

    int totalDigits1 = d1 + p1;
    int totalDigits2 = d2 + p2;

    if (totalDigits1 > totalDigits2) {
        cout << ">" << endl;
    } else if (totalDigits1 < totalDigits2) {
        cout << "<" << endl;
    } else {
        while (d1 < d2) {
            x1 *= 10;
            d1++;
        }
        while (d2 < d1) {
            x2 *= 10;
            d2++;
        }

        if (x1 > x2) {
            cout << ">" << endl;
        } else if (x1 < x2) {
            cout << "<" << endl;
        } else {
            cout << "=" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--) forrealtho();
    return 0;
}
