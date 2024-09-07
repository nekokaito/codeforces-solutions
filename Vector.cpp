#include <bits/stdc++.h>
using namespace std;

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
#ifndef                    KAITO
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
void print(vector<int> data){
    cout << "Total Elements: " << data.size() << "\n";
    for (int datam:data)
        cout << datam << " ";
    cout << "\n\n";
}




int main () {
    //input;
    output;
    fast;
    
    //start------------------------------
    vi i= {3,7,9,11};
    i.push_back(8);
    i.end();
    i.begin();

    i.insert(i.end(),21);


    print(i);
    
    cout<<i[2];
   cout<<i.front();
    cout<<i.back();

    for (int px:i) {
         cout<<px<<" ";
    }

   vector <int> vec = {3,6,5,7} ; // declear
   
   vec.insert(vec.end(),2,8);

    print(vec);

   cout<<vec.back();



    vec.pop_back();
    vec.clear();
    vec.erase(vec.begin()+1, vec.begin()+2);
    vec.
   

   for(int i:vec) {
      cout<<i<<" ";
   }







    
     return 0;
 }
