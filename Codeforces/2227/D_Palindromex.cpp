// Codeforces: https://codeforces.com/contest/2227/D
// Problem: Palindromex
// Submission: https://codeforces.com/contest/2227/submission/374519725
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-14T14:58:45.000Z
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

ll get_mex(ll L, ll R, vector<ll>& a){
    ll len = a.size();

    while(L>=0 && R<len && a[L]==a[R]){
        L--; R++;
    }
    L++;R--;
    ll curlen = R-L+1;
    vector<bool> pre(curlen+1,false);

    rep(i,L,R+1){
        if(a[i]<=curlen){
            pre[a[i]]=true;
        }
    }
    ll mex = 0;
    while(mex<=curlen && pre[mex]){
        mex++;
    }
    return mex;
}

void forrealtho()
{
    ll n; cin>>n;
    vector<ll> a(2*n);

    ll fzero  =-1, szero = -1;
    rep(i,0,2*n){
        cin>>a[i];
        if(a[i]==0){
            if(fzero==-1) fzero=i;
            else szero = i;
        }
    }

    ll midL = (fzero+szero)/2;
    ll midR = (fzero+szero+1)/2;

    ll a1 = get_mex(fzero,fzero,a);
    ll a2 = get_mex(szero,szero,a);
    ll a3 = get_mex(midL,midR,a);

    cout<<max({a1,a2,a3})<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
