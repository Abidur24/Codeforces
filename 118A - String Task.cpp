#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c=='y');
}
int main() {
  string str;
  cin>>str;
  transform(str.begin(),str.end(),str.begin(),::tolower);
  string result = "";
  for (char c : str) {
    if (!isVowel(c)) {
      result += c;
    }
  }
  for(int i=0;i<result.length();i++)
  {
  cout <<"."<<result[i];
  }
  cout<<endl;
  return 0;
}

/* Here the task of the problem is: 
- Firstly to transform the string into lowercase ,
I used transform function in line 9 to transform it into lowercase;
- Secondly string result , where I put all the char without vowels,
including 'y' with the bool function isVowel declared in 3rd line;
- Then I need to print the result with '.' before all characters. I used
the for loop to print such result;
- And thats the program which was accepted on codeforces ; */ 
