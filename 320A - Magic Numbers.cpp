#include<bits/stdc++.h>
#define ll long long
#define f for
#define cndl cout<<endl
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length(),x=true;
    for(int i=0;i<n;i++)
    {
    	if(s[i]=='1' || s[i]=='4' && s[i-1]=='1' || s[i]=='4' && s[i-1]=='4' && s[i-2]=='1')
    	{
    		x=true;
    	}
    	else
    	{
    		x=false;
    		break;
    	}
    }
    if(x)
    {
    	cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
    }

	return 0;
}
