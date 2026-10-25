// Codeforces: https://codeforces.com/contest/2200/E
// Problem: Divisive Battle
// Submission: https://codeforces.com/contest/2200/submission/376019158
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-25T09:14:42.000Z
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

ll prime(ll x){
    set<ll> s;
    for(ll i = 2; i*i<=x; i++){
        while(x%i==0){
            s.insert(i);
            x/=i;
        }
    }
    if(x>1) s.insert(x);
    if(s.size()>1) return -1;
    if(s.size()==0) return 1;
    return *s.begin(); 
}

void forrealtho()
{
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];

    if(is_sorted(all(a))){
        cout<<"Bob"<<endl;
        return;
    }

    vector<ll> b(n);
    rep(i,0,n){
        b[i] = prime(a[i]);
    }

    bool ok =false;
    rep(i,0,n){
        if(b[i]==-1){
            ok = true;
            break;
        }
    }
    if(ok){
        cout<<"Alice"<<endl;
        return;
    }

    cout<<(is_sorted(all(b))?"Bob":"Alice")<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
