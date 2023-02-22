/*C program to print difference between odd and even sum*/
#include<stdio.h>
main()
{
	int n,i,even,odd,diff;
	scanf("%d",&n);
	i=1;
	odd=even=0;
	while(i<=n)
	{
		if(i%2!=0)
		odd=odd+i;
		else
		even=even+i;
		i++;
	}
	diff=odd-even;
	printf("Difference=%d",diff);
}
