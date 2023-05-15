#include<bits/stdc++.h>
using namespace std;
int main()
{
    string as,bs,cs;
    cin>>as>>bs>>cs;
    string s=as+bs;
    sort(s.begin(),s.end());
    sort(cs.begin(),cs.end());
    if(s==cs)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
