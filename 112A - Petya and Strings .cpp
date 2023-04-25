// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int result = a.compare(b);

        if(result > 0){
            cout<<1<<endl;
        }
        else if(result < 0)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    return 0;
}
