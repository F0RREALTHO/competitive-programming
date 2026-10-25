// Codeforces: https://codeforces.com/contest/1870/A
// Problem: MEXanized Array
// Submission: https://codeforces.com/contest/1870/submission/277826031
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-23T18:45:57.000Z
// Rating: 800
#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;

for (int i=0 ; i<t ; i++)
{
    int n,k,x;
    cin>>n>>k>>x;

    if (k>n)
    {
        cout<<-1<<endl;
        continue;
    }
    
    int sum = ((k-1) * k)/2;

    int r = n-k;

    int max = sum + r*x;

    if (k==x)
    {
        int max = sum+ r*(x-1);
        cout<<max<<endl;
        continue;
    }
    
    if (x+1==k)
    {
        int max = sum + r*x;
        cout<<max<<endl;
        continue;
    }

    if (k>x)
    {
        cout<<-1<<endl;
        continue;
    }
    
    

    cout<<max<<endl;
    
    // heheheh
    
    
}

}
