#include <stdio.h>

int main()
{   
       #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif
    
    
    int i, j, n, t=0;
    scanf("%d", &n);
    
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {   
            
            if(a[i] == a[j])
            {
                printf ("a[%d] = %d\n", i, a[j]);
                printf ("a[%d] = %d\n", j, a[i]);
                t++;
                break;
            }
            
            
        }

        
    }
    printf ("Total Duplicate: %d", t);

    return 0;
}