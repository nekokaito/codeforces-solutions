#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
         #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif
    string s;
    while (cin >> s) {
        int n = s.size();
        vector<int> pi(n);
        for (int i = 1; i < n; i++) {
            int j = pi[i-1];
            while (j > 0 && s[i] != s[j]) {
                j = pi[j-1];
            }
            if (s[i] == s[j]) {
                j++;
            }
            pi[i] = j;
        }
        long long ans = 0;
        for (int i = n-1; i >= 0; i--) {
            ans += (n - pi[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
