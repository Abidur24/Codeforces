#include<bits/stdc++.h>
using namespace std;
bool isComposite(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return true;
        }
    }
    return false;
}
 
int main()
{
    int n,b=0;
    cin>>n;
    for(int i=4; i<n; i++)
    {
        b=i;
        int x=n-i;
            if(isComposite(b) && isComposite(x)) {
                cout<<b<< " "<<x<<endl;
                break;
            }
    }
    return 0;
}
