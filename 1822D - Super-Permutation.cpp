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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
        }
        else if(n%2==1)
        {
            cout<<-1<<endl;
        }
        else{
            int j=1;
                for(int i=n;i>0;i-=2){
                 cout<<i<<" "<<j<<" ";
                j+=2;
                }
                cout<<endl;
        }
    }

    return 0;
}
