// Codeforces: https://codeforces.com/contest/1980/D
// Problem: GCD-sequence
// Submission: https://codeforces.com/contest/1980/submission/315249295
// Language: C++17 (GCC 7-32)
// Submitted: 2025-04-13T07:17:30.000Z
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
    vector<ll> a(n) , b(n-1);
    rep(i,0,n) cin>>a[i];   

    rep(i,0,n-1) b[i] = gcd(a[i],a[i+1]);
    if(is_sorted(all(b))){
        cout<<"YES"<<endl;
        return;
    }

    ll bp =1;
    rep(i,0,n-2){
        if(b[i]>b[i+1]){
            bp=i;
            break;
        }
    }

    for(ll d: {bp,bp+1,bp+2}){
        if(d>=n) continue;
        vector<ll> temp;
        rep(i,0,n){
            if(i!=d) temp.push_back(a[i]);
        }
        bool ok = true;
        rep(i,0,temp.size()-2){
            ll g1 = gcd(temp[i],temp[i+1]);
            ll g2 = gcd(temp[i+1],temp[i+2]);
            if(g1>g2){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
