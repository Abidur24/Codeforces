// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds.

 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int count=0,r=0,n;

    cin>>n;
    string s;
    cin>>s;
    string temp = "";
	temp += s.at(0);

	for (int i = 1; i < s.length(); i++) {
		if (!(temp.find(s.at(i)) < temp.length()))
			temp = temp + s.at(i);
	    }

    int x=temp.length();
    cout<<x*2+(n-x)<<endl;

    }
     return 0;
}
