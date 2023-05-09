#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.length();
    for(int i=0;i<x;i++)
    {
        if(s[i]=='W' && s[i+1]=='U'&& s[i+2]=='B')
        {
            if(i!=0){
            cout<<" ";
            }
            i+=2;
        }
        else
        {
            cout<<s[i];
        }
    }
    return 0;
}
