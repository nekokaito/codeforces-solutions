#include<bits/stdc++.h>
using namespace std;

int main()
{   
        // #ifndef Kaito
        // freopen("input.txt", "r", stdin); 
        // freopen("output.txt", "w", stdout);
        //  #endif
  
  string s, t;
  int i=0;
  cin>>s; 

  for (i = 7; i<s.length()-2; i++) {
         
        t += s[i];
  }

  cout<<t;

 return 0;


}