// Codeforces: https://codeforces.com/contest/1761/B
// Problem: Elimination of a Ring
// Submission: https://codeforces.com/contest/1761/submission/296117189
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-12T07:00:30.000Z
// Rating: 1000
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
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    ll op = 0;
    bool fl = true;
    if(a[0]==a[n-2] ){
        fl = false;
    }

    // rep(i,0,n){
    //     if(a.size()!=0){
    //         if(fl){
    //             a.pop_back();
    //             op++;
    //         } else {
    //             a.erase(a.begin());
    //             op++;
    //         }

    //         if(a.size()!=1 && a[0]==a.back()){
    //             a.pop_back();
    //         }
    //     } else {
    //         break;
    //     }
    // }

    set<ll> s;
    rep(i,0,n) s.insert(a[i]);
    if(s.size()<3){
        cout<<(n/2)+1<<endl;
    } else {
        cout<<n<<endl;
    }

    // cout<<op<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
