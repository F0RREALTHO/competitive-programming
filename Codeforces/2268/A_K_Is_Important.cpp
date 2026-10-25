// Codeforces: https://codeforces.com/contest/2268/A
// Problem: K Is Important
// Submission: https://codeforces.com/contest/2268/submission/394367843
// Language: C++17 (GCC 7-32)
// Submitted: 2026-10-13T08:21:07.000Z
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

void forrealtho()
{
    ll n,k; cin>>n>>k;
    vector<ll> a(n+1,0);
    rep(i,1,n+1) cin>>a[i];

    vector<ll> vec;
    vector<bool> flg(n+1,false);
    ll sum = 0;
    ll l =k ,r = n-k+1;
    while(n>=2*k){
        sum+=(a[l]+a[r]);
        flg[l]=true; flg[r] = true;
        l++;r--;
        n-=2;
    }
    rep(i,1,flg.size()){
        if(!flg[i]){
            vec.push_back(a[i]);
        }
    }
    // cout<<sum<<endl;
    ll m = vec.size();
    ll pick = m-k+1;

    if(pick>0){
        rep(i,0,pick){
            sum+=max(vec[i],vec[m-i-1]);
        }
    }
    cout<<sum<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
