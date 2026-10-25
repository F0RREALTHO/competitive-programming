// Codeforces: https://codeforces.com/contest/2132/C2
// Problem: The Cunning Seller (hard version)
// Submission: https://codeforces.com/contest/2132/submission/361029799
// Language: C++17 (GCC 7-32)
// Submitted: 2026-02-01T16:47:28.000Z
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
const ll MOD=1e9+7;
const ll N=1e5+7;

ll binexp(ll a, ll b, ll MOD=1e9+7)
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

ll p3(ll x){
    ll r=1;
    rep(i,0,x) r*=3;
    return r;
}

ll cost(ll x){
    ll c=p3(x+1);
    if(x>0) c+=x*p3(x-1);
    return c;
}

void forrealtho(){
    ll n,k;
    cin>>n>>k;
    
    vector<ll> d;
    ll t=n;
    while(t>0){
        d.push_back(t%3);
        t/=3;
    }
    
    ll m=0;
    rep(i,0,d.size()) m+=d[i];
    
    if(m>k){
        cout<<-1<<endl;
        return;
    }
    
    ll e=k-m;
    
    rrep(i,d.size()-1,1){
        if(d[i]>0){
            ll s=cost(i)-3*cost(i-1);
            if(s>0){
                ll use=min((ll)d[i],e/2);
                d[i]-=use;
                d[i-1]+=3*use;
                e-=2*use;
            }
        }
    }
    
    ll ans=0;
    rep(i,0,d.size()) ans+=d[i]*cost(i);
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
