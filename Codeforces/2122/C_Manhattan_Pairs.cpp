// Codeforces: https://codeforces.com/contest/2122/C
// Problem: Manhattan Pairs
// Submission: https://codeforces.com/contest/2122/submission/329825433
// Language: C++17 (GCC 7-32)
// Submitted: 2025-07-19T15:07:33.000Z
// Rating: 1700
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

struct Point{
    ll x,y,id;
};

bool compX(const Point& a,const Point& b ){
    if(a.x!=b.x) return a.x<b.x;
    return a.y<b.y;
}

bool compY(const Point& a,const Point& b ){
    if(a.y!=b.y) return a.y<b.y;
    return a.x<b.x;
}

void forrealtho()
{
    ll n; cin>>n;
    vector<Point> a(n);
    rep(i,0,n){
        cin>>a[i].x>>a[i].y;
        a[i].id=i+1;
    }

    sort(all(a),compX);

    vector<Point> l,r;
    rep(i,0,n/2) l.push_back(a[i]);
    rep(i,n/2,n) r.push_back(a[i]);

    sort(all(l),compY);
    sort(all(r),compY);

   rep(i,0,n/2){
        cout<<l[i].id<<" "<<r[n/2-i-1].id<<endl;
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


