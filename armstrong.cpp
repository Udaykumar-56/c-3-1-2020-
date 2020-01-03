#include<stdio.h>
#include<math.h>
int main()
{
	int n, t1 , t2, x = 0, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t1 = n;
    t2 = n;
    while(t1 > 0)
    {
    	x++;
    	t1/=10;
	}
	while(t2 > 0)
	{
		s = s + pow(t2%10,x);
		t2/=10;
    }
			if( s == n)
			printf("%d is an armstrong number",n);
			else
			printf("% d is not an armstrong number",n);
			return 0;
}
