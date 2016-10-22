#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

1. output prime numbeint main()
{
	int num = 0;
	int i = 2;
	int flog = 1;
	printf("100到200之间的素数有：\n");
	for(num = 100;num <= 200;num++)
	{
		for(i = 2;i <= num/2;i++)
		{
			if(num % i == 0)			{
				flog = 1;
				break;
			}
			else
t				flog = 0;
		}
		if(flog == 0)
		printf("%d ",num);
	}
	printf("\n");	return 0;
}

int main()
{
u	int num = 0;
	
	printf("100到200之间的素数有：\n");
	for(num = 100;num <= 200;num++)
	{
		int i = 2;
flog:
		if(num % i != 0)
		{
			i++;
			if(i > num / 2)
				printf("%d ",num);
			else
				goto flog;
		}
	}
	printf("\n");
	return 0;
}



2.output Multiplication table

int main()
{
	int D = 0;
	int i = 0;
	int j = 0;
	for(i = 1;i <= 9;i++)
	{
		for(j = 1;j <= i;j++)
		{
			D = i * j;
			printf("%d * %d = %d ",i,j,D);
		}
		printf("\n");
	}
	return 0;
}

3. leap year

int main()
{
	int year = 0;
	printf("1000到2000之间的闰年有：\n");
	for(year = 1000;year <= 2000;year++)
	{
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf("%d  ",year);
	}
	printf("\n");
	return 0;
}# learning
