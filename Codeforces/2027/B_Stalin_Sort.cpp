// Codeforces: https://codeforces.com/contest/2027/B
// Problem: Stalin Sort
// Submission: https://codeforces.com/contest/2027/submission/297068178
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-18T07:42:57.000Z
// Rating: 1100
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

void stalinsort(const vector<ll>& a, vector<ll>& result) {
    ll max_so_far = a[0];
    result.push_back(max_so_far); 

    for (ll i = 1; i < a.size(); i++) {
        if (a[i] > max_so_far) {
            max_so_far = a[i];
            result.push_back(a[i]);
        }
    }
}

void forrealtho() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    // vector<ll> result;
    // stalinsort(a, result);

    // if (n == 1) {
    //     cout << 0 << endl;  
    // } else if (n == 2) {
    //     if (a[0] < a[1]) {
    //         cout << 1 << endl;  
    //     } else {
    //         cout << 0 << endl;  
    //     }
    // } else if(n==result.size()) {
    //     cout << n-result.size() + 1 << endl;
    // } else {
    //     cout<<result.size() -1 <<endl;
    // }
    ll mx = LLONG_MAX;
    rep(i,0,n){
        ll cnt= i   ;
        rep(j,i+1,n){
            if(a[j]>a[i]){
                cnt++;
            }
        }
        mx= min(mx,cnt);
    }
    cout<<mx<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
