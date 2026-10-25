// Codeforces: https://codeforces.com/contest/2205/C
// Problem: Simons and Posting Blogs
// Submission: https://codeforces.com/contest/2205/submission/376112555
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-26T05:09:29.000Z
// Rating: 1500
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
    vector<vector<ll>> blog(n);
    
    rep(i,0,n){
        ll x; cin>>x;
        vector<ll> a(x);
        rep(j,0,x){cin>>a[j];}

        unordered_set<ll> seen;
        rrep(j,x-1,0){
            if(seen.find(a[j])==seen.end()){
                blog[i].push_back(a[j]);
                seen.insert(a[j]);
            }
        }
    }
    vector<ll> ans;
    vector<bool> used(n,false);
    unordered_set<ll> inq;

    rep(i,0,n){
        ll bst = -1;
        vector<ll> bsq;
        rep(j,0,n){
            if(used[j]) continue;

            vector<ll> csq;
            for(ll x:blog[j]){
                if(inq.find(x)==inq.end()){
                    csq.push_back(x);
                }
            }
            if(bst==-1 || csq<bsq){
                bst=j;
                bsq = csq;
            }
        }
        used[bst] = true;
        for(ll x:bsq){
            ans.push_back(x);
            inq.insert(x);
        }
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
