#include<stdio.h>
void main()
{
int k = 5;
int *p = &k;
int **m = &p;
printf("%d%d%dn", k, *p, **p); }