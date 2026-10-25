// Codeforces: https://codeforces.com/contest/1372/B
// Problem: Omkar and Last Class of Math
// Submission: https://codeforces.com/contest/1372/submission/311487402
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-20T06:33:05.000Z
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
    ll x;cin>>x;
    ll mini =LLONG_MAX;
    ll a=1,b=x-1;;
    if(!(x&1)){
        cout<<x/2<<" "<<x/2<<endl;
        return;
    }else{
        for(ll i =2;i*i<=x;i++){
            if(x%i==0){
               if(i<=(x/2)) a=max(a,i);
               if(x/i<=(x/2)) a=max(a,x/i);
            }
        }
        b=x-a;
        cout<<a<<" "<<b<<endl;
        return;
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
