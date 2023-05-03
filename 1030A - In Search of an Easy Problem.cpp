#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[i]==1){
            cout<< "HARD"<<endl;
            x=1;
            break;
        }
    }
    if(x==0){
        cout<< "EASY"<<endl;
    }
    return 0;
}
 
