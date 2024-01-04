#include<bits/stdc++.h>
using namespace std;
int t,n=0,x,y;

void solve()
{
    cin >> n;

    string s;

    cin>>s;

    x=y=0;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='U')
        {
            y++;
        }
        if(s[i]=='R')
        {
            x++;
        }
        if(s[i]=='L')
        {
            x--;
        }
        if(s[i]=='D')
        {
            y--;
        }

        if(x==1 && y==1 )
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}

int main()
{
// #ifndef Kaito
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    cin>>t;

    while(t--)
    {
        solve();
    }
}