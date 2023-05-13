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
        set<int>a;
        for(int i=0;i<x/2;i++)
        {
            a.insert(s[i]);
        }
        if(a.size()>1)
        {
            cout<<"YES"<<endl;
 
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
