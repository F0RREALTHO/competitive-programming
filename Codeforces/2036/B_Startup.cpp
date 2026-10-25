// Codeforces: https://codeforces.com/contest/2036/B
// Problem: Startup
// Submission: https://codeforces.com/contest/2036/submission/291879432
// Language: C++17 (GCC 7-32)
// Submitted: 2024-11-17T01:58:50.000Z
// Rating: 800
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
    ll n, k;
    cin >> n >> k;
    vector<pll> M(k);
    rep(i, 0, k) cin >> M[i].F >> M[i].S;

    if (n >= k) {
        ll tot_money = 0;
        rep(i, 0, k) {
            tot_money += M[i].S;
        }
        cout << tot_money << endl;
    } else {
        map<ll, vector<ll>> btoc;
        rep(i, 0, k) {
            btoc[M[i].F].push_back(M[i].S);
        }

        vector<ll> earnings;
        rep(i,0,btoc.size()){
            ll brand_sum = 0;
            rep(j,0,btoc[i].size()){
                brand_sum += btoc[i][j];
            }
            earnings.push_back(brand_sum);
        }

        sort(all(earnings),greater<ll>());

        ll max_earnings = 0;
        rep(i, 0, min(n, (ll)earnings.size())) {
            max_earnings += earnings[i];
        }

        cout << max_earnings << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
