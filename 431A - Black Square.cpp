#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int ar[4],count =0,sum=0;
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        sum+=ar[(s[i]-'0')-1];
    }
    cout<<sum<<endl;
    return 0;
}
