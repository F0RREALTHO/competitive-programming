// Codeforces: https://codeforces.com/contest/1833/D
// Problem: Flipper
// Submission: https://codeforces.com/contest/1833/submission/306918197
// Language: C++17 (GCC 7-32)
// Submitted: 2025-02-19T19:12:02.000Z
// Rating: 1400
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

void lexo(vector<ll> &b, vector<ll> p) {
    ll n=b.size();
    rep(i,0,n) {
        if(b[i]>p[i]) return;
        else if(b[i]<p[i]) {
            b=p;
            return;
        }
    }
}

void forrealtho()
{
    ll n;
    cin>>n;
    
    vector<ll> a(n);
    vector<ll> b(n);
    
    ll pos =-1;
    rep(i,0,n) {
        cin>>a[i];
        b[i]=i+1;
        
        if(a[i]==n) pos=i;
        if(pos==0 && a[i]==n-1) pos=i;
    }
    
    rep(l,0,n) {
        ll r = n-1;
        if(l < pos) r = pos-1;
        
        vector<ll> p;        
        rep(j,r+1,n) {
            p.push_back(a[j]);
        }        
        rrep(j,r,l) {
            p.push_back(a[j]);
        }
        rep(j,0,l) {
            p.push_back(a[j]);
        }
        lexo(b, p);
    }
    
    rep(i,0,n){
        cout<<b[i]<<" ";
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
