#include <stdio.h>

int main()
{
	int i, j, k, n = 0;
	for(i = 1;i <= 4;i++)
	{
		for(j = 1;j <= 4;j++)
		{
			for(k = 1;k <= 4;k++)
			{
				if(i!=j&&i!=k&&j!=k)
				{
					printf("%d ",i*100+j*10+k);
					n++;
				}
			}
		}
		printf("\n");
	}
	printf("%d\n", n);
	return 0;
}
