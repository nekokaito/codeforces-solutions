#include <bits/stdc++.h>
using namespace std;
int main()
        {  
        
        //  #ifndef Kaito
        // freopen("input.txt", "r", stdin); 
        // freopen("output.txt", "w", stdout);
        //  #endif


          string a;
          cin>>a;
          int zero=0,one=0;
           for(int i=0;i<a.size();i++){
          if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1' && a[i+5]=='1' && a[i+6]=='1'){
               one=1;
             break;
           } 
          else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0' && a[i+5]=='0' && a[i+6]=='0' ){
              zero=1;
              break;}
 
                 }
              if(one==1 or zero==1){
                      cout<<"YES";
                 }
                else{
                      cout<<"NO";
                }
            return 0;

}