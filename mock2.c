#include<stdio.h>
#include<stdlib.h>

#define MAX 100005

int T, N, Q, score[MAX], pen[MAX], owner[MAX];

int find(int x)
{
if (owner[x] == x)
return x;
return owner[x] = find(owner[x]);
}

void union_func(int x, int y)
{
int rootx = find(x);
int rooty = find(y);
if (rootx == rooty)
return;
if (score[rootx] < score[rooty])
{
owner[rootx] = rooty;
score[rooty] += score[rootx];
}
else
{
owner[rooty] = rootx;
score[rootx] += score[rooty];
}
}

int main()
{ 
       #ifndef Kaito
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
         #endif
scanf("%d", &T);
while (T--)
{
scanf("%d", &N);
for (int i = 1; i <= N; i++)
{
scanf("%d", &score[i]);
pen[i] = i;
owner[i] = i;
}
scanf("%d", &Q);
while (Q--)
{
int type, x, y;
scanf("%d%d", &type, &x);
if (type == 1)
{
scanf("%d", &y);
union_func(x, y);
}
else if (type == 2)
{
printf("%d\n", score[find(x)]);
}
else
{
int cnt = 1;
while (pen[cnt] != x)
cnt++;
printf("%d\n", cnt);
}
}
}
return 0;
}