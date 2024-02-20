#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <set>
#include <cctype>

#include <climits>

#include <ctime>

using namespace std;


int main() {

  ios_base::sync_with_stdio(0); 
  cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin >> t;

        int ca = 1;
    while(t--){
        int n;
        cin >> n;

        int a[n];
        int b[n];

        int ai=1;

        int c =0;
        int num = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }


        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i] && num != b[i])
            {
                c++;
            } else {
                num = a[ai];
                ai++;
                
            }
        }

        cout << "Case " << ca++ << ": " << c << endl;
        
    }


    return 0;

}