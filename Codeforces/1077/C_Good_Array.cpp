// Codeforces: https://codeforces.com/contest/1077/C
// Problem: Good Array
// Submission: https://codeforces.com/contest/1077/submission/311410892
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-19T13:34:42.000Z
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
    ll n;cin>>n;
    vector<ll> a(n);
    ll tsum=0;    
    map<ll, ll> freq;
    rep(i,0,n) {
        cin>>a[i];
        tsum+=a[i];
        freq[a[i]]++;
    }
    vector<ll> ans;
    rep(i,0,n){
        ll rsum = tsum-a[i];
        if(rsum % 2 == 0) {
            ll target = rsum / 2;
            if(freq[target] > 0) {
                if(target == a[i]) {
                    if(freq[target] > 1) {
                        ans.emplace_back(i+1);
                    }
                } else {
                    ans.emplace_back(i+1);
                }
            }
        }
    }
    
    if(ans.size()==0){
        cout<<0<<endl;
    }else{
        cout<<ans.size()<<endl;
        rep(i,0,ans.size()){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--) forrealtho();
    return 0;
}
