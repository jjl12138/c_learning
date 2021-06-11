#include <stdio.h>

int main()
{
	int a, b, max;
	printf("input two numbers:\n");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("max = %d", a);
	}
	else
	{
		printf("max = %d", b);
	}
	return 0;
}
