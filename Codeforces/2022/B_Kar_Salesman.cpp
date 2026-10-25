// Codeforces: https://codeforces.com/contest/2022/B
// Problem: Kar Salesman
// Submission: https://codeforces.com/contest/2022/submission/290286917
// Language: C++17 (GCC 7-32)
// Submitted: 2024-11-06T17:56:33.000Z
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

bool sell(vector<ll>& cars, ll x, ll mid) {
    ll totalCars = 0;
    ll n = cars.size();
    ll sum = accumulate(all(cars),0LL);
    // rep(i,0,n) {
    //     totalCars += (car[i] + x - 1) / x;
    // }
    return ((sum +x - 1)/x)<=mid;
}

void forrealtho()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> cars(n);
    rep(i,0,n) cin>>cars[i];
        ll sum = accumulate(all(cars),0LL);

    sort(all(cars));

    ll low = 1 , high = cars[n-1];
    while(low<=high){
       ll mid = (low+high)/2;
       if(sell(cars,x,mid)) high = mid - 1;
       else low = mid + 1;
    }
    cout<<max((sum+x-1)/x,cars[n-1])<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
