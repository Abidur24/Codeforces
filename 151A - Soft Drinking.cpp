#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,tst=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drnk = (k*l)/nl;
    int slt = p/np;
    int sl =(c*d);
    tst = min(drnk,slt);
    tst = min(tst,sl)/n;
    cout<<tst<<endl;
    return 0;
}
