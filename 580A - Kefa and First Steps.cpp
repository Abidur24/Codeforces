// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count =0 , x=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int temp=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]>=temp)
        {
            count+=1;
            if(x<count)
            {
                x=count;
            }
        }
        else{
            count = 0;
        }
        temp=ar[i];
    }
    cout<<x+1<<endl;
    return 0;
}
