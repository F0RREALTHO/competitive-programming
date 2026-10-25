// Codeforces: https://codeforces.com/contest/2148/F
// Problem: Gravity Falls
// Submission: https://codeforces.com/contest/2148/submission/360370837
// Language: C++17 (GCC 7-32)
// Submitted: 2026-01-28T17:54:22.000Z
// Rating: 1800
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
    ll n; cin>>n;
    vector<vector<ll>> a(n);
    ll maxi = 0;
    rep(i,0,n){
        ll k; cin>>k;
        a[i].resize(k);
        rep(j,0,k) cin>>a[i][j];
        maxi = max(maxi,k);
    }

    vector<ll> ans;
    vector<bool> us(n,0);
    ll curj = 0;
    ll uc = 0;

    while(uc<n){
        vector<ll> hm;
        rep(i,0,n){
            if(!us[i] && a[i].size()>curj){
                hm.push_back(i);
            }
        }
        if(hm.empty()) break;

        auto compsuf = [&](ll i1, ll i2){
            auto& a1 = a[i1];
            auto& a2 = a[i2];
            ll j = curj;

            ll l1 = a1.size();
            ll l2 = a2.size();

            ll i=j, k=j;
            while(i<l1 && k<l2){
                if(a1[i]!=a2[k]){
                    return a1[i]<a2[k];
                }
                i++;
                k++;
            }
            return (l1-j)<(l2-j);
        };
        ll b = hm[0];
        rep(i,1,hm.size()){
            ll curi = hm[i];
            if(compsuf(curi,b)){
                b = curi;
            }
        }
        rep(i,curj,a[b].size()) ans.push_back(a[b][i]);

        curj = a[b].size();
        us[b] = true;
        uc++;
    }
    rep(i,0,ans.size()){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
