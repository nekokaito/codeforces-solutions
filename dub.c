#include <stdio.h>

int main () {

	  #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif

  int i=0, j, n;

  scanf ("%d", &n);

  int a[n];

  for (int s=0; s<n; s++) {
  	scanf ("%d", &a[i]);
  }

  while (i<n) {

     for (j=i+1; j<n; j++) {

     	if (a[i] == a[j]) {
     		a[i] = a[j]; 
     	}
     }
     i++;
}


 return 0;

}