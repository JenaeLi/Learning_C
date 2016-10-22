#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
void menu()
{
	printf("*******************************\n");
	printf("********    1.play    *********\n");
	printf("********    0.exit    *********\n");
	printf("*******************************\n");
}

void Init(char arr[3][3],int rows,int cols)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < rows;i++)
	{
		for(j = 0;j < cols;j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void Checkerboard(char arr[3][3],int rows,int cols)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < rows;i++)
	{
		for(j = 0;j < cols;j++)
		{
			printf(" %c ",arr[i][j]);
			
			if(j != 2)
				printf("|");
		}
		printf("\n");
		if(i != 2)
			printf("---|---|---\n");
	}
}

static int Full(char arr[3][3],int rows,int cols)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < rows;i++)
	{
		for(j = 0;j < cols;j++)
		{
			if(arr[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}	

void Player(char arr[3][3],int rows,int cols)
{
	int x = 0;
	int y = 0;
	printf("Please input (x y):>");
	while(1)
	{
		scanf("%d %d",&x,&y);
		if( x > 0 && x <= 3 && y > 0 && y <= 3)
		{
			if(arr[x-1][y-1] == ' ')
			{
				arr[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("Please input again(x y):>");
			}
		}
		else
		{
			printf("Please input again(x y):>");
		}
	}
}

void Computer(char arr[3][3],int rows,int cols)
{
	int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
	while(1)
	{
		x = rand()%3;
		y = rand()%3;
		if(arr[x][y] == ' ')
		{
			arr[x][y] = 'O';
			break;
		}
		else
		{
			if(Full(arr,rows,cols) == 0)
				continue;
			else
				break;
		}
	}
}

int Win_check(char arr[3][3],int rows,int cols)
{
	int i = 0;
	int ret = 0;

	for(i = 0;i < rows;i++)
	{
		if((arr[i][0] == arr[i][1])&&(arr[i][2] == arr[i][1])&&(arr[i][1] != ' '))
			return arr[i][1];
	}
	for(i = 0;i < rows;i++)
	{
		if((arr[0][i] == arr[1][i])&&(arr[2][i] == arr[1][i])&&(arr[1][i] != ' '))
			return arr[1][i];
	}
	if((arr[0][0] == arr[1][1])&&(arr[2][2] == arr[1][1])&&(arr[1][1] != ' '))
		return arr[1][1];
	if((arr[0][2] == arr[1][1])&&(arr[2][0] == arr[1][1])&&(arr[1][1] != ' '))
		return arr[1][1];
	if(ret = Full(arr,rows,cols))
		return 'q';
	return 0;
}

void Game()
{
	char arr[3][3] = {0};
	int rows = 3;
	int cols = 3;
	int ret = 0;
	Init(arr,rows,cols);
	Checkerboard(arr,rows,cols);
	do
	{
		Player(arr,rows,cols);
		if((ret = Win_check(arr,rows,cols)) != 0)
		{
			Checkerboard(arr,rows,cols);
			break;
		}
		Computer(arr,rows,cols);
		Checkerboard(arr,rows,cols);
		ret = Win_check(arr,rows,cols);
	}while(ret == 0);
	if(ret == 'X')
	{
		printf("congratulations£¬you are winner!\n");	
	}
	else if(ret == 'q')
	{
		printf("It is a draw!\n");
	}
	else if(ret == 'O')
	{
		printf("What a pity ,computer is winner!\n");
	}
}