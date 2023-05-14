#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=s.length();
        for(int i=0;i<x;i+=2)
        {
            cout<<s[i];
        }
        cout<<s[x-1]<<endl;
    }
    return 0;
}
