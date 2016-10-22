#define _CRT_SECURE_NO_WARNINGS 1




int main()
{
	int input = 0;
	do
	{
		menu();
		printf("Please  choose:\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			Game();
			break;
		case 0:
			break;
		default:
			printf("Error input.\n");
			break;
		}
	}while(input);
	return 0;
}