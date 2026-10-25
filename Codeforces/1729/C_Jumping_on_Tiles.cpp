// Codeforces: https://codeforces.com/contest/1729/C
// Problem: Jumping on Tiles
// Submission: https://codeforces.com/contest/1729/submission/303313017
// Language: C++17 (GCC 7-32)
// Submitted: 2025-01-28T02:37:08.000Z
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

void forrealtho()
{
    string s;
    cin>>s;
    ll n = s.length();
    map<char,vector<ll>> mp;
    rep(i,0,n){
        mp[s[i]].push_back(i+1);
    }
    char st = s[0], end = s[n-1];
    vector<ll> path;
    path.push_back(1);
    if(st<=end){
        for(auto it = mp.lower_bound(st); it!=mp.upper_bound(end);it++){
            rep(i,0,n){
                if(s[i]==it->F &&(i+1!=1 &&i+1!=n)){
                    path.push_back(i+1);
                }
            }
        }
    } else{
        for(auto it = mp.lower_bound(end); it!=mp.upper_bound(st);it++){
            rep(i,0,n){
                if(s[i]==it->F &&(i+1!=1 &&i+1!=n)){
                    path.push_back(i+1);
                }
            }
        }
        reverse(path.begin()+1,path.end());
    }
    path.push_back(n);
    cout<<abs(end-st)<<" "<<path.size()<<endl;
    for(auto idx:path){
        cout<<idx<<" ";
    }cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
