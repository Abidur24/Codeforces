//Accepted on codeforces

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c,d,count=0;
    for(int i=1;i<=t;i++){
            count=0;
        cin>>a>>b>>c>>d;
        if(a<b){
            count+=1;
        }
        if(a<c){
            count+=1;
        }
        if(a<d){
            count+=1;
        }
        cout<<count<<endl;
    }
    return 0;
}
