// Codeforces: https://codeforces.com/contest/2053/B
// Problem: Outstanding Impressionist
// Submission: https://codeforces.com/contest/2053/submission/298844409
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-28T15:26:14.000Z
// Rating: 1200
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
    ll n;
    cin >> n;
    
    vector<pll> v(n);
    rep(i,0,n) {
        cin >> v[i].F >> v[i].S;
    }
    
    string ans = "";
    set<ll> st;
    map<ll,ll> mp;
    
    rep(i,0,n) {
        if(v[i].F == v[i].S) {
            st.insert(v[i].F);
            mp[v[i].F]++;
        }
    }
    
    vector<ll> fixed;
    for(auto x : st) fixed.push_back(x);
    
    rep(i,0,n) {
        ll l = v[i].F, r = v[i].S;
        
        if(l == r) {
            ans += (mp[l] > 1 ? '0' : '1');
            continue;
        }
        
        ll lower = lower_bound(all(fixed), l) - fixed.begin();
        ll upper = lower_bound(all(fixed), r+1) - fixed.begin();
        ll fixed_count = upper - lower;
        
        ans += (fixed_count == r-l+1 ? '0' : '1');
    }
    
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
