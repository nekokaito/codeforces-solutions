#include <bits/stdc++.h>

using namespace std;

int main () {

// 	#ifndef Kaito
   //      freopen("input.txt", "r", stdin); 
   //      freopen("output.txt", "w", stdout);
   // #endif

  int i=0, n=0;
  cin>>n;
  int ar[n];

  for (i=0; i<n; i++) {
  	cin>>ar[i];
  }

  for (int j=n-1; j>=0; j--) {
  	cout<<ar[j]<<" ";
  }

 return 0;

}