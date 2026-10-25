// Codeforces: https://codeforces.com/contest/1998/A
// Problem: Find K Distinct Points with Fixed Center
// Submission: https://codeforces.com/contest/1998/submission/277116839
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-19T01:19:31.000Z
// Rating: 800
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t,xc,yc,k;
        cin>>t;
        
        for (int i = 0; i < t; i++)
        {   
            cin>>xc>>yc>>k;
            if (k==1)
            {
                cout<<xc<<" "<<yc<<endl;
            }
            
            else
            {
            
                int cnt = 0;
                int j = 1;

                while (cnt<k-1 && k!=2)
                {
                    // cout<<cnt<<endl;
                    cout<<2*(xc+k*j)<<" "<<2*(yc+k*j)<<endl;
                    cout<<-2*(xc+k*j)<<" "<<-2*(yc+k*j)<<endl;

                    cnt+=2;
                    j++;   
                    if (k%2==0 && cnt>=k-3) break;                 
                }
                
                if (k%2!=0)
                {
                    cout<<k*xc<<" "<<k*yc<<endl;
                }
                else
                {
                    cout<<((int)1e9)/2<<" "<<((int)1e9)/2<<endl;
                    cout<<k*xc - ((int)1e9)/2<<" "<<k*yc - ((int)1e9/2)<<endl;
                }
                

            }
            
            
        }

    }


