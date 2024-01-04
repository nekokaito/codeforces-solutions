#include<bits/stdc++.h>

using namespace std;

int main()
{   
        #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif
  
  string s;
  int i=0;
  cin>>s; 
  
  s[0]= toupper(s[0]);
  cout<<s[0];

  for (i = 1; i<s.length(); i++) {
         
         if (s[i] == 's' ) {
                cout<<"$";
         }
         else if (s[i] == 'i') {
                
                cout<<"!";
         }
         else if (s[i] == 'o' ) {
                cout<<"()";
         }
        else { cout<<s[i];
                }
        }
       
       cout<<".";

   return 0;


}