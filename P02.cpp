#include <bits/stdc++.h>

using namespace std;

int main () {

	// #ifndef Kaito
   //      freopen("input.txt", "r", stdin); 
   //      freopen("output.txt", "w", stdout);
   // #endif

  int i, n, r1, r2, sum=0;
  cin>>n;
  int ar[n];

  for (i=0; i<n; i++) {
  	cin>>ar[i];
  }
  cin>>r1>>r2;

  for (int j=r1; j<=r2; j++) {
   sum += ar[j];

  }

  cout<<sum;

  
 return 0;

}