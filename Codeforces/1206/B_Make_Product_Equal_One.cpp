// Codeforces: https://codeforces.com/contest/1206/B
// Problem: Make Product Equal One
// Submission: https://codeforces.com/contest/1206/submission/280733596
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-11T13:00:27.000Z
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

void forrealtho()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    ll cost = 0;
    ll negative_count = 0;
    ll zero_count = 0;

    rep(i,0,n) {
        cin >> a[i];
        if (a[i] > 1) {
            cost += a[i] - 1;
        } else if (a[i] < -1) {
            cost += -1 - a[i];
            negative_count++;
        } else if (a[i] == 0) {
            cost += 1;
            zero_count++;
        } else if (a[i] == -1) {
            negative_count++;
        }
    }

    if (negative_count % 2 != 0 && zero_count == 0) {
        cost += 2;  
    }

    cout << cost << endl;

}
    


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // ll t=1;
    // cin>>t;
    forrealtho();
    return 0;
}
