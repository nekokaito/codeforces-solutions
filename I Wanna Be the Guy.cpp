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


int main()
{   

    // input;
    // output;
    fast;
    
    /*  ∧,,,∧
       (• ⩊ •)
       |￣U U￣￣￣￣￣￣￣￣￣|
       |   code from here </>|   
       ￣￣￣￣￣￣￣￣￣￣￣￣ */

    int n;
    cin>>n;
    bool X[101] = {false}; 
    bool Y[101] = {false};

    int p, x;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> x;
        X[x] = true;
    }


    int q, y;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> y;
        Y[y] = true;
    }

   //HARU MG_________
    
    for (int i = 1; i <= n; i++) {
        if (!X[i]&& !Y[i]) {
            cout << "Oh, my keyboard!" <<endl;
            return 0; //ENDS
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}