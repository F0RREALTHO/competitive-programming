// Codeforces: https://codeforces.com/contest/1690/B
// Problem: Array Decrements
// Submission: https://codeforces.com/contest/1690/submission/302512991
// Language: C++17 (GCC 7-32)
// Submitted: 2025-01-22T19:46:35.000Z
// Rating: 800
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
    ll n;
    cin>>n;

    vector<ll> a(n) , b(n);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];

    ll last = LLONG_MAX;

    rep(i,0,n){
        if(b[i]>a[i]){
            cout<<"NO"<<endl;
            return;
        }
        else if(b[i]!=0){
            last = min(last,a[i]-b[i]);
        }
    }
    if(last==LLONG_MAX){
        cout<<"YES"<<endl;
        return;
    }

    if(n==1 && a[0]<b[0]){
        cout<<"NO"<<endl;
        return;
    }

    vector<ll> p_diff(n,-1);

    rep(i,0,n){
        if(b[i]!=0){
            p_diff[i]=a[i]-b[i];
            last = p_diff[i];
        } else {
            if(last>=0 && a[i]<=last){
            p_diff[i] = last;
            }
        }
    }
    set<ll> s;
    rep(i,0,n){
        s.insert(p_diff[i]);
    }
    if(s.size()!=1){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
