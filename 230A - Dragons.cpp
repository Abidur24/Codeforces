#include<bits/stdc++.h>
#define ll long long
#define f for
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int x=2*a,y=0,z=0;
    int ar[x];
    for(int i=0;i<x;i++)
    {
    	cin>>ar[i];
    }
    for(int i=0;i<x;i+=2)
    {
    	for(int j=i;j<x;j+=2)
    	{
    		y=0;
    		z=0;
    		if(ar[i]>ar[j])
    		{
    			y=ar[i];
    			z=ar[i+1];
    			ar[i]=ar[j];
    			ar[i+1]=ar[j+1];
    			ar[j]=y;
    			ar[j+1]=z;

    		}
    	}
    }
    for(int i = 0;i<x;i+=2)
    {
    	if(n>ar[i])
    	{
    		n+=ar[i+1];
    	}
    	else
    	{
    		cout<<"NO"<<endl;
    		n=0;
    		break;
    	}
    }
    if(n>0)
    {
    	cout<<"YES"<<endl;
    }

	return 0;
}
