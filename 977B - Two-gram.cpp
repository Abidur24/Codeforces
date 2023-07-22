// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define cndl cout<<endl
using namespace std;
int main()
{
    ll int n;
    cin>>n;
    string s;
    cin>>s;
    vector<string >list;
    string ss;
    for(int i=0;i<n-1;i++)
    {
    	ss+=s[i];
    	ss+=s[i+1];
    	//cout<<ss<<endl;
    	list.pb(ss);
    	ss="";
    }
    int cnt=0;
    string p="";
    for(int i=0;i<n-1;i++)
    {
    	//cout<<list[i]<<" ";
    	ss=list[i];
    	int count=0;
    	for(int i=0;i<n-1;i++)
    	{
    		if(ss==list[i])
    		{
    			count++;
    			if(cnt<count)
    			{
    				cnt=count;
    				p=ss;
    			}
    		}
    	}

    }
    cout<<p<<endl;

	return 0;
}
