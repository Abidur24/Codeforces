#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll int Pw(ll int p){
    for(int i=0;;i++)
    {
        if(pow(2,i)>p)
        {
            i--;
            return pow(2,i);
        }
    }
    return 0;
}
int main() {
     ll int x;
     cin>>x;
     int cnt = 0,i =-1; ll int temp = x;
     while(temp>1)
     {
         i++;
         if(pow(2,i)== temp)
         {
             cnt++;
             temp=0;
         }
         else
         {
             temp-=(Pw(temp));
             cnt++;
         }
     }
     
     if(x&1)
     {
     cnt++;
     }
     
     cout<<cnt<<endl;

    return 0;
}
