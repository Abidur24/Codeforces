// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,c1=0,c2=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        c1=0;c2=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>x;
            if(x==1)
            {
                c1+=1;
            }
            if(x==2)
            {
                c2+=1;
            }
        }
        if(c1%2==1 && c2%2==1)
        {
            cout<<"NO"<<endl;
        }
        else if(c1%1==1 && c2==0)
        {
            cout<<"NO"<<endl;
        }
        else if(c2%2==1&& c1==0)
        {
            cout<<"NO"<<endl;
        }
        else if(c1%2==1 && c2%2==0){
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
//
