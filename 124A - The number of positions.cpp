#include<bits/stdc++.h>
#define ll long long
#define f for
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum=n-a;
    int x=n-(a+b);
    if(x>1)
    {
    	sum = sum-x+1;
    }
    cout<<sum<<endl;
	return 0;14 5 5
	
}
