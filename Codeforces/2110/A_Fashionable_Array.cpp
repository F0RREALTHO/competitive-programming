// Codeforces: https://codeforces.com/contest/2110/A
// Problem: Fashionable Array
// Submission: https://codeforces.com/contest/2110/submission/321798819
// Language: C++17 (GCC 7-32)
// Submitted: 2025-05-28T14:01:26.000Z
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
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    sort(all(a));
    ll cnt = 0 , op=0;
    ll l = 0, r = n-1;
    ll d = 0 , u = n-1;
    if((a[0]+a[n-1])%2==0){
        cout<<0<<endl;
        return;
    }
    while(l<=r && d<=u){
        bool flg = false; 
        if(a[l]%2!=0){
            while(l<=r && a[l]%2!=0){
                l++;
                cnt++;
                flg = true;
            }
        }else if(a[r]%2!=0){
            while(l<=r && a[r]%2!=0){
                r--;
                cnt++;
                flg = true;
            }
        }
        if(a[d]%2==0){
            while(d<=u && a[d]%2==0){
                d++;
                op++;
                flg = true;
            }
        }else if(a[u]%2==0){
            while(d<=u && a[u]%2==0){
                u--;
                op++;
                flg = true;
            }
        }

        if(!flg) break;  
    }
    cout<<min(op,cnt)<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
