// Codeforces: https://codeforces.com/contest/1999/B
// Problem: Card Game
// Submission: https://codeforces.com/contest/1999/submission/279786887
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-04T10:41:32.000Z
// Rating: 1000
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int ans=0;
		int a,b,c,d;
		cin>>a>>b>>c>>d;
if(a>=c&&b>d||a>c&&b>=d)ans++;
if(a>=d&&b>c||a>d&&b>=c)ans++;
cout<<ans*2<<endl;	} 
}
