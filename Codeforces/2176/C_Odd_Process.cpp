// Codeforces: https://codeforces.com/contest/2176/C
// Problem: Odd Process
// Submission: https://codeforces.com/contest/2176/submission/356669614
// Language: C++17 (GCC 7-32)
// Submitted: 2026-01-06T18:25:35.000Z
// Rating: 1300
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

void forrealtho()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    vector<ll> odd, even;
    for (ll x : a) {
        if (x & 1) odd.push_back(x);
        else even.push_back(x);
    }

    sort(odd.begin(), odd.end());        
    sort(even.begin(), even.end(), greater<ll>());

    vector<ll> pref_even(even.size() + 1, 0);
    rep(i,0,even.size()){
        pref_even[i + 1] = pref_even[i] + even[i];
    }

    ll odd1 = 1, even1 = 0;
    if (odd.size() == 0) {
        odd1 = 0;
        even1 = 1;
    }

    rep(k,1,n+1){
        if (k > 1) {
            if (even1 < even.size()) {
                even1++;
            }
            else {
                if (odd1 + 2 <= odd.size() && even1 > 0) {
                    odd1 += 2;
                    even1--;
                }
                else {
                    odd1++;
                }
            }
        }

        if (odd1 & 1 && odd1 <= odd.size()) {
            cout << odd.back() + pref_even[even1] << " ";
        }
        else {
            cout << 0 << " ";
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
