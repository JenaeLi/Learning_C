#include<stdio.h>
int main()
{
	int n = 1;
	int d = 0;
	for(d = 9;d > 0;d--)
	{
		n = 2*(n+1);
	}
	printf("n = %d\n",n);
	return 0;
}
