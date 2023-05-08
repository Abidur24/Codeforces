#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a="3141592653589793238462643383279502";
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=a[i])
            {
                break;
            }
            else
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
