#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+')
        {
            count++;
        }
    }
        int x=s.length()-count;
        int j=0,ar[x];
        for(int i=0;i<s.length();i+=2)
        {
            ar[j]=s[i]-'0';
            j++;
        }
        sort(ar,ar+x);
        cout<<ar[0];
        for(int j=1;j<x;j++)
        {
            cout<<'+'<<ar[j];
        }
        cout<<endl;

    return 0;

}
