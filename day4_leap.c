#include <stdio.h>

int main()
{
	int year;
	printf("Please input year:\n");
	scanf("%d", &year);
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year %400 == 0)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
		else
		{
			printf("Yes\n");
		}
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
