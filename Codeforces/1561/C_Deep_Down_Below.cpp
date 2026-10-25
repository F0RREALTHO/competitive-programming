// Codeforces: https://codeforces.com/contest/1561/C
// Problem: Deep Down Below
// Submission: https://codeforces.com/contest/1561/submission/312204791
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-24T14:18:08.000Z
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

bool ok(ll mid, vector<pair<ll,ll>>& a){
    ll pow = mid;
    for(auto &[req,m]:a){
        if(pow<req) return false;
        pow+=m;
    }
    return true;
}

void forrealtho()
{
    ll n; cin>>n;
    vector<pair<ll,ll>> a;
    rep(i,0,n){
        ll k; cin>>k;
        vector<ll> m(k);
        ll mini = LLONG_MIN;
        rep(i,0,k) {
            cin>>m[i];
            mini = max(mini,m[i]-i+1);
        }
        a.emplace_back(mini,k);
    }
    sort(all(a));
    ll low = 1, high = 1e18, ans = LLONG_MAX;
    while(low<=high){
        ll mid = low+(high-low)/2;
        if(ok(mid,a)){
            high = mid-1;
            ans =min(ans,mid);
        }else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
