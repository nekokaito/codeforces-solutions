#include<bits/stdc++.h>
#define ll long long
#define FASTER ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace  std;
int main() {

 #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif

    int t;cin>>t;
    while(t--){
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool fl_x = 0, fl_y = 0;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'U')y++;
        else if (str[i] == 'R')x++;
        else if (str[i] == 'L')x--;
        else if (str[i] == 'D')y--;

        if (x==1 && y==1)fl_x = 1;

    }
    if (fl_x == 1 )cout << "YES" << endl;
    else cout << "NO" << endl;
}
    return 0;
}










