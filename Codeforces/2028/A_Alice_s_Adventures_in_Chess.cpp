// Codeforces: https://codeforces.com/contest/2028/A
// Problem: Alice's Adventures in ''Chess''
// Submission: https://codeforces.com/contest/2028/submission/290903038
// Language: C++17 (GCC 7-32)
// Submitted: 2024-11-10T15:59:49.000Z
// Rating: 900
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

pll getOffset(const string& s) {
    ll x = 0, y = 0;
    rep(i,0,s.size()) {
        if(s[i] == 'N') y++;
        else if(s[i] == 'S') y--;
        else if(s[i] == 'E') x++;
        else x--;
    }
    return {x, y};
}

bool checkPath(ll tx, ll ty, const string& s) {
    ll x = 0, y = 0;
    rep(i,0,s.size()) {
        if(s[i] == 'N') y++;
        else if(s[i] == 'S') y--;
        else if(s[i] == 'E') x++;
        else x--;
        if(x == tx && y == ty) return true;
    }
    return false;
}

bool canReach(ll x, ll y, ll tx, ll ty, ll dx, ll dy) {
    if(dx == 0 && dy == 0) return false;
    if(dx == 0) return x == tx && (ty - y) % dy == 0 && (ty - y) / dy >= 0;
    if(dy == 0) return y == ty && (tx - x) % dx == 0 && (tx - x) / dx >= 0;
    if((tx - x) % dx != 0 || (ty - y) % dy != 0) return false;
    ll kx = (tx - x) / dx;
    ll ky = (ty - y) / dy;
    return kx == ky && kx >= 0;
}

void forrealtho() {
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    
    if(checkPath(a, b, s)) {
        cout << "YES" << endl;
        return;
    }
    
    pll off = getOffset(s);
    ll x = 0, y = 0;
    
    rep(i,0,s.size()) {
        if(s[i] == 'N') y++;
        else if(s[i] == 'S') y--;
        else if(s[i] == 'E') x++;
        else x--;
        
        if(canReach(x, y, a, b, off.F, off.S)) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--) forrealtho();
    return 0;
}
