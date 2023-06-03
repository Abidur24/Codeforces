#include<bits/stdc++.h>
#define ll long long
#define f for
#define cndl cout<<endl
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll int n;
		cin>>n;
		ll int sum=0;
		if(n<7)
			{
				sum=15;
			}
		else if(n%10==0)
		{
			sum= (n/10)*25;
		}
		else if(n%8==0)
		{
			sum=(n/8)*20;
		}
		else if(n%6==0)
		{
			sum =(n/6)*15;
		}
		else
		{
			sum = (n/10)*25;
			if(n%10==1 || n%10 ==2)
			{
				sum+=5;
			}
			else if(n%10==3 || n%10 == 4)
			{
				sum+=10;
			}
			else if(n%10==5 || n%10==6)
			{
				sum+=15;
			}
			else if(n%10==7 || n%10 ==8)
			{
				sum+=20;
			}
			else{
				sum+=25;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
