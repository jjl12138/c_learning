#include <stdio.h>

int main()
{
	int i = 1,j = 1, k;
	printf("%d %d ", i, j);
	for(k = 1;k <= 20;k++)
	{
		i = i + j;
		j = j + i;
		printf("%d %d ", i, j);
	}
	return 0;
}
