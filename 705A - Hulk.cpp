#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=2;
    cin>>n;
    if(n>=1)
    {
        cout<< "I hate ";
    }
    while(i<=n)
    {
        if(i%2==0)
        {
            cout<< "that I love ";
        }
        else
        {
            cout<< "that I hate ";
        }
        i++;
    }
    cout<< "it"<<endl;
    return 0;
}
