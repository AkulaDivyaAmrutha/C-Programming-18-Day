/*C program to print factorial of a given number */
#include<stdio.h>
main()
{
	int n,i,fact;
	scanf("%d",&n);
	i=1;
	fact=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial=%d",fact);
}
