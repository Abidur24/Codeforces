#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,k,n=0,temp=0;
		cin>>x>>k;
		if(x%k!=0)
		{
			cout<<1<<endl<<x<<endl;
		}
		else if(x>=k)
		{
			temp =x;
			while(temp--)
			{
				if(temp%k!=0 && (x-temp)%k!=0)
				{
					cout<<2<<endl<<temp<<" "<<x-temp<<endl;
					break;

				}
			}

		}
	}
	return 0;
}
