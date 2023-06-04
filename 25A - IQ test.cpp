#include<bits/stdc++.h>
#define ll long long
#define f for
#define cndl cout<<endl
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
    	cin>>ar[i];
    }
    int x = 0,y=0,count=0;
    for(int i=0;i<n;i++)
    {
    	if(ar[i] & 1)
    	{
    		x = i+1;
    		count++;
    	}
    	else
    	{
    		y=i+1;
    	}
    }
    if(count>1)
    {
    	cout<<y<<endl;
    }
    else
    {
    	cout<<x<<endl;
    }

	return 0;
}
