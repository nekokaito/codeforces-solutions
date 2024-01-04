#include<bits/stdc++.h>
using namespace std;
int t,n=0,x,y;
char s[50];
int main()
{   
        #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif

     
    cin>>t;
    while(t--)
    {   //string s;
        
        cin>>n;
        x=y=0;
        for(int i=0;i<n;i++)
        {   
            cin>>s;
            
            if(s[i]=='U') {y++;}
            if(s[i]=='R') { x++;}
            if(s[i]=='L'){ x--;}
            if(s[i]=='D') { y--;}
        }
        
        if(x==1 && y==1 ) { 
            cout<<"YES"<<endl;
            break;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
