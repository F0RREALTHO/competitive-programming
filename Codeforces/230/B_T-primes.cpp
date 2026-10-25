// Codeforces: https://codeforces.com/contest/230/B
// Problem: T-primes
// Submission: https://codeforces.com/contest/230/submission/321335307
// Language: C++17 (GCC 7-32)
// Submitted: 2025-05-26T07:24:52.000Z
// Rating: 1300
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
const ll N=1e6+7;

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

vector<bool> prime(N,true);
void primeE(){
    prime[0]=prime[1]=false;
    for(ll i=2; i*i<N;i++){
        if(prime[i]){
            for(ll j = 2*i; j<N; j+=i){
                prime[j] = false;
            }
        }
    }
}

void forrealtho()
{
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n){
        ll y = sqrt(a[i]);
        if(prime[y] && y*y==a[i]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    primeE();
    ll t=1;
    // cin>>t;
    while(t--) forrealtho();
    return 0;
}
