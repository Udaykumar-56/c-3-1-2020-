#include<stdio.h>
int main()
{
	int m,n, sum = 0;
	printf("enter two numbers:");
	scanf("%d %d", &m, &n);
	while(m > 0)
	{
		if(m % 2 != 0)
		{
			sum += n;
		}
		m = m / 2;
		n = n * 2;
	}
	printf(" %d*%d=%d the product of the numbers is",m,n,sum);
}
