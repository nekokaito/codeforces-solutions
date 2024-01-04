#include<stdio.h>
int main()
{   
    #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif


    int x, y, z, sum;
    scanf(“%d %d %d”,&x,&y,&z);

    sum=x+y+z;

    printf("Sum of %d, %d and %d is %d\n",x,y,z,sum);                            

return 0;
}