#include <bits/stdc++.h>
using namespace std;

/* ∩――――∩
||     ∧ ﾍ　 ||
||    (* ´ ｰ`) ZZzz
|ﾉ^⌒⌒づ`￣  ＼
(　ノ　　⌒ ヽ ＼
＼　　||￣￣￣￣￣||
　 ＼,ﾉ|| Eat . Sleep . Code */

#define fast               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl                 '\n'
#define ui                 unsigned int
#define ll                 long long int
#define ld                 long double
#define ull                unsigned long long int
#define wt(x)              int x; cin>>x; while(x--)
template<typename T> T     maxof(T a, T b) { return (a > b) ? a : b; }
template<typename T> T     minof(T a, T b) { return (a < b) ? a : b; }
template<typename T> T     midof(T a, T b, T c) { return maxof(minof(a, b), minof(maxof(a, b), c)); }
#ifndef                    KAITO /* ^._.^ฅ */
#define                    input freopen("input.txt", "r", stdin);
#define                    output freopen("output.txt", "w", stdout);
#define                    error freopen("error.txt", "w", stderr);
#endif
#define sort_arr(arr, n)   sort(arr, arr + n)
#define sort_desc(v)       sort(v.rbegin(), v.rend())
#define is_even(x)         ((x) % 2 == 0)
#define is_odd(x)          ((x) % 2 != 0)
#define length(arr)        (sizeof(arr) / sizeof(arr[0]))
#define vi                 vector<int>


int main() {  

    input;
    output;
    fast;
    
    /*  ∧,,,∧
       (• ⩊ •)
       |￣U U￣￣￣￣￣￣￣￣￣|
       |   code from here </>|   
       ￣￣￣￣￣￣￣￣￣￣￣￣ */
   int n;
   int size;
   cin>>n;
   string s;
 
 
  for (int i=0; i<n ; i++) {

    cin >>s;
    size = s.length();
    if (size>10) {
        cout<<s[0]<<size-2<<s[size-1]<<nl;
    }
    else {
        cout<<s<<nl;
    }
  }
 
  return 0;
}