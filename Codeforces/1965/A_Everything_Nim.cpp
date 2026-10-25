// Codeforces: https://codeforces.com/contest/1965/A
// Problem: Everything Nim
// Submission: https://codeforces.com/contest/1965/submission/314915123
// Language: C++17 (GCC 7-32)
// Submitted: 2025-04-10T16:59:14.000Z
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

void forrealtho()
{
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    sort(all(a));
    vector<ll> st;
    st.push_back(a[0]);
    rep(i,1,n){
        if(a[i]!=a[i-1]) st.push_back(a[i]);
    }
    rrep(i,st.size()-1,1){
        st[i]=st[i]-st[i-1];
    }
    bool ans = true;
    rep(i,0,st.size()){
        if(i==st.size()-1) break;
        if(st[i]==1) ans=!ans;
        else break;
    }
    if(ans){
        cout<<"Alice"<<endl;
    }else cout<<"Bob"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
