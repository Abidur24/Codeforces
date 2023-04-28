#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,rs;
    cin>>s>>rs;
    reverse(rs.begin(),rs.end());
    if(s==rs)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}
