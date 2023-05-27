#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	cin>>s;
	int n=s.length();
	if(s[0]-'0' !=9 && s[0]-'0'>4)
	{
		cout<<9-(s[0]-'0');
	}
	else
	{
	    cout<<s[0]-'0';
	}
	for(int i=1;i<n;i++)
	{
		if(s[i]-'0'<=9 && s[i]-'0'>4)
		{
			cout<<9-(s[i]-'0');
		}
		else
		{
		    cout<<s[i]-'0';
		}
	}
    return 0;
}
