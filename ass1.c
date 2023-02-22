/* C program to print n even numbers*/
#include<stdio.h>
main()
{
	int n,i;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	    if(i%2==0)
		printf("%d ",i);
		i++;	
	}
}
