#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r=0,count=0;
        cin>>n;
        int ar[n];
 
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]==0)
            {
                count++;
                if(r<count)
                {
                    r=count;
                }
            }
            else{
                count=0;
            }
        }
        cout<<r<<endl;
 
    }
    return 0;
}
