// Codeforces: https://codeforces.com/contest/2137/E
// Problem: Mexification
// Submission: https://codeforces.com/contest/2137/submission/337742932
// Language: C++17 (GCC 7-32)
// Submitted: 2025-09-09T11:20:36.000Z
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

ll get_sum(const vector<ll>& p, ll n, ll m_val) 
{
    ll sum=0;
    for(ll x : p) sum += x;

    sum += (n-p.size())*m_val;
    return sum;
}

void forrealtho()
{
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];

    vector<ll> cnt(n + 2, 0);
    rep(i,0,n) cnt[a[i]]++;

    ll m0 = 0;
    while(m0<=n && cnt[m0]>0) m0++;
    
    vector<ll> p0;
    rep(i,0,m0){
        if(cnt[i]==1)p0.push_back(i);
    }
    
    ll sum_s1 =get_sum(p0,n,m0);
    
    if(k==1){
        cout<<sum_s1<<endl;
        return;
    }

    vector<ll> cnt_s1(n+2,0);
    for(ll x:p0) cnt_s1[x]++;
    
    if(m0<cnt_s1.size()) cnt_s1[m0]+=(n-p0.size());
    
    ll m1=0;
    while(m1<=n && cnt_s1[m1]>0) m1++;
    
    vector<ll> p1;
    rep(i,0,m1){
        if(cnt_s1[i]==1) p1.push_back(i);
    }
    
    ll sum_s2 = get_sum(p1,n,m1);
    if(!(k&1)){
        cout<<sum_s2<<endl;
        return;
    }

    vector<ll> cnt_s2(n + 2, 0);
    for(ll x:p1) cnt_s2[x]++;
    if(m1 <cnt_s2.size()) cnt_s2[m1]+=(n-p1.size());

    ll m2 = 0;
    while(m2<=n && cnt_s2[m2]>0)m2++;

    vector<ll> p2;
    rep(i,0,m2){
        if(cnt_s2[i]==1) p2.push_back(i);
    }

    ll sum_s3 = get_sum(p2,n,m2);
    
    cout<<sum_s3<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
