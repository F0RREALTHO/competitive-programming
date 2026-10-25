// Codeforces: https://codeforces.com/contest/2232/C1
// Problem: Seating Arrangement (Easy Version)
// Submission: https://codeforces.com/contest/2232/submission/376656559
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-30T15:09:44.000Z
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
    ll x,s; cin>>x>>s;

    string eia; cin>>eia;

    ll t = 0, cap = 0, sat=0;
    ll a_e = 0, a_i = 0;

    rep(i,0,n){
        char ch = eia[i];
        if(ch=='I'){
            if(t<x){
                t++;
                cap+=(s-1);
                sat++;
            }else if(a_i>0){
                a_i--; a_e++;
                cap-=1;
                sat++;
            }
        }else if(ch == 'E'){
            if(cap>0){
                cap--;
                sat++;
            }else if(a_e>0 && t<x){
                a_e--; a_i++;
                t++;
                cap+=s-1;
                sat++;
            }
        }else if(ch == 'A'){
            if(cap>0){
                cap--;
                a_e++;
                sat++;
            }else if(t<x){
                t++;
                cap+=s-1;
                a_i++;
                sat++;
            }
        }
        a_i = min(a_i,cap/s);
    }
    cout<<sat<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
