// Codeforces: https://codeforces.com/contest/2139/D
// Problem: Antiamuny Wants to Learn Swap
// Submission: https://codeforces.com/contest/2139/submission/337627652
// Language: C++17 (GCC 7-32)
// Submitted: 2025-09-08T16:07:31.000Z
// Rating: 1900
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
    ll n,q; cin>>n>>q;
    vector<ll> a(n+1);
    rep(i,1,n+1) cin>>a[i];

    vector<ll> ngl(n+1,0);
    stack<ll> s;
    rep(i,1,n+1){
        while(!s.empty() && a[s.top()]<=a[i]) s.pop();
        if(!s.empty()) ngl[i] = s.top();
        s.push(i);
    }
    while(!s.empty()) s.pop();

    vector<ll> nsr(n+1,0);
    rrep(i,n,1){
        while(!s.empty() && a[s.top()]>=a[i]) s.pop();
        if(!s.empty()) nsr[i]=s.top();
        s.push(i);
    }

    vector<ll> mink(n+1,n+1);
    rep(i,1,n+1){
        if(ngl[i]!=0 && nsr[i]!=0){
            ll j = ngl[i];
            ll k = nsr[i];
            mink[j] = min(mink[j],k);
        }
    }

    vector<ll> post(n+2,n+1);
    rrep(i,n,1){
        post[i]=min(post[i+1],mink[i]);
    }

    rep(i,0,q){
        ll l,r; cin>>l>>r;
        if(post[l]<=r){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
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
