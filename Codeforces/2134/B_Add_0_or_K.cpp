// Codeforces: https://codeforces.com/contest/2134/B
// Problem: Add 0 or K
// Submission: https://codeforces.com/contest/2134/submission/335706948
// Language: C++17 (GCC 7-32)
// Submitted: 2025-08-26T17:29:22.000Z
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

bool is_prime(ll x){
    if(x<2) return false;
    if(!(x&1)) return x==2;
    for(ll i =3;i*i<=x;i+=2) if(!(x%i)) return false;
    return true;
}

void forrealtho()
{
    ll n,k; cin>>n>>k;
    vector<ll> a(n); rep(i,0,n) cin>>a[i];

    // ll p = -1;
    // rep(i,2,k+1){
    //     if(!is_prime(i)) continue;
    //     if(!(k%i)) continue;
    //     p = i;
    //     break;
    // }

    // if(p==-1) p = 2;
    // ll invk = binexp(k%p,p-2,p);
    // vector<ll> res(n);

    // rep(i,0,n){
    //     ll need = (p-(a[i]%p))%p;
    //     ll t = (need*invk)%p;
    //     res[i]= a[i]+t*k;
    // }

    // for(auto x:res){
    //     cout<<x<<" ";
    // }cout<<endl;

    rep(i,0,n){
        a[i]+=(a[i]%(k+1))*k;
    }

    for(auto x:a){
        cout<<x<<" ";
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
