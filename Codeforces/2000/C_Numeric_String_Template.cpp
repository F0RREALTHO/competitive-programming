// Codeforces: https://codeforces.com/contest/2000/C
// Problem: Numeric String Template
// Submission: https://codeforces.com/contest/2000/submission/301115836
// Language: C++17 (GCC 7-32)
// Submitted: 2025-01-15T14:09:42.000Z
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
    map<ll,vector<ll>> mp;
    rep(i,0,n) {
        cin>>a[i];
        mp[a[i]].push_back(i);
    }
    ll m;
    cin>>m;
    map<char,vector<ll>> mp2;
    vector<pair<string,ll>> b(m);
    rep(i,0,m) {
        cin>>b[i].F;
        b[i].S = b[i].F.size();
        rep(j,0,b[i].F.size()){
            mp2[b[i].F[j]].push_back(i);
        }
    }
    rep(i,0,m){
        if(n!=b[i].S){
            cout<<"NO"<<endl;
            continue;;
        }
        unordered_map<ll,char> nTc;
        unordered_map<char,ll> cTn;
        bool isValid = true;
        rep(j,0,n){

            char curr = b[i].F[j];
            ll currNum = a[j];
            if(nTc.count(currNum) && nTc[currNum]!=curr){
                isValid = false;
                break;
            }
            if(cTn.count(curr) &&  cTn[curr] !=currNum){
                isValid = false;
                break;
            }
            nTc[currNum] = curr;
            cTn[curr] = currNum;
        }
        if(isValid) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
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
