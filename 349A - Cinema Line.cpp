// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
//#define f for
#define cndl cout<<endl
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int f = 0,f2 = 0,c=0;
    if(ar[0]>25)
    {
        cout<<"NO"<<endl;
    }
    else{
    for(int i=0;i<n;i++)
    {
        c++;
        
        if(ar[i]==25)
        {
            f++;
        }
        else if(ar[i]==50)
        {
            f2++;
            if(f>0)
            {
                f--;
            }
            else
            {
                cout<<"NO"<<endl;
                c=0;
                break;
                
            }
        }
        else
        {
            if(f2>0 && f>0)
            {
                f2--;
                f--;
            }
            else if(f>2)
            {
                f-=3;
            }
            else
            {
                cout<<"NO"<<endl;
                c=0;
                break;
                
            }
        }
    }
    if(c==n)
    {
        cout<<"YES"<<endl;
    }
}
    return 0;
}
