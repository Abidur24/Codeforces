#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin>>ws,s);
    int n= s.length();
    set<int>a;
    string ar="";
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            ar+=s[i];
        }

    }
    for(int i=0;i<ar.length();i++)
    {
        a.insert(ar[i]);
    }
    int x=a.size();
    cout<<x<<endl;
    return 0;
}
