// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i=0 ,count = a,x=0,y=0;
    for(i=0; ;i++)
    {
        x=a/b;
        y=a%b;
        count+=x;
        a=x+y;
        if(a<b)
        {
            break;
        }
    }
    cout<<count<<endl;

    return 0;
}
/*
 Here the task of the problem is : 
- You have a candles and you can get total 'a' hours which count = a hours time light.
- Then you can reuse b burned candles such a new candles , so x=a/b; and count = count+x;
- In the loop you will reset the value of a=x+y; (y=a%b is another burned candles 
                                                  which can reuse with a;
                                                  )
- And when you have not more than or equal b candles you will break the loop;
- Thats the program accepted in Codeforces!
*/                                                  
