#include <stdio.h>

void main()
{
int a, b, count;

scanf ("%d\t%d", &a, &b);
if (a>=0 && b>=0)
{
for (int i=a+1; i<b; i++)
{
count=0;
for (int j=1; j<i; j++)
{
if (i%j==0)
count++;
}
if (count==1)
printf ("%d\t", i);
}
}
else
printf ("invalid input");
}
