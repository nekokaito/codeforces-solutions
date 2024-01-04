#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{   
        #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif
  
  string s[25];
  
  int j=0;
  int i=0;
  cin>>s; 
  
  s[0]= toupper(s[0]);


  for (i = 1; i<s.length(); i++) {
         
         if (s[i] == 's' ) {
                s[i] = '$';
         }
         if (s[i] == 'i' ) {
                s[i] = '!';
         }
         if (s[i] == 'o' ) {
                s[i] = ')';
        
                }
        }


           
           

    cout<<s<<".";

   return 0;


}