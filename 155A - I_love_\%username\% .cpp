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
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int min=ar[0],max=ar[0],count=0;
    for(int i=1;i<n;i++){
        if(min>ar[i])
        {
            count+=1;
            min=ar[i];
        }
        else if(max<ar[i])
        {
            count+=1;
            max=ar[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
