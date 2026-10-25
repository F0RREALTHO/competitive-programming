// Codeforces: https://codeforces.com/contest/1881/B
// Problem: Three Threadlets
// Submission: https://codeforces.com/contest/1881/submission/282626186
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-23T12:45:15.000Z
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

void forrealtho() {
    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    a = arr[0], b = arr[1], c = arr[2];

    if (a == b && b == c || 
        (b == 2 * a && c == 3 * a) || 
        (b == 2 * a && c == 2 * a) || 
        (b == a && c == 2 * a) || 
        (b == a && c == 3 * a) ||
        (b == a && c == 4 * a)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) forrealtho();
    return 0;
}
