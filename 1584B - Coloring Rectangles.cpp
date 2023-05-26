#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,x=0,y=0;
        cin>>n>>m;
        int a=(max(m,n)),b=min(m,n);
        if(n==1 || m==1)
        {
            x=a/3;
            if(a%3)
            {
                x+=1;
            }
        }
        else if(m%3==0 || n%3==0)
        {
            if(a%3){
                x=(b/3)*a;
            }
            else
            {
                x=(a/3)*b;
            }
            
        }
        else
        {
            x=((m*n)/3)+1;
        }
 
        cout<<x<<endl;
    }
    return 0;
}
