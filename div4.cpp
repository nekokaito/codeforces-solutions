#include <bits/stdc++.h>
#define fast   ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main() {  
        
        
          char a[26];
          int i, n;
          cin>>n;
          
          for (i=0; i<n; i++) {
          cin>>a[i];

          if (a[i] =='c'|| a[i] =='o'||a[i]=='d'||a[i] =='e'||a[i] =='f'||a[i] =='o'||a[i] =='r'||a[i] =='c'|| a[i] =='e'||a[i] =='s'){
        cout<<"Yes"<<endl;

      }
      else {
        cout<<"No"<<endl;
      }
    
          
}

  return 0;

}