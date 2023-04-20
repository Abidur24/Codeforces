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
    int t;
    cin>>t;
    int x=0,y=0,n;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n%3==0)
        {
            x=n/3;
            y=n/3;
        }
        else if(n%3==1){
            x=n/3+1;
            y=n/3;
        }
        else
        {
            x=n/3;
            y=n/3+1;
        }
        cout<<x<< " "<<y<<endl;
    }
    return 0;
}
