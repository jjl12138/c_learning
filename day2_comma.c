#include <stdio.h>

int main()
{
	int a = 2, b = 4, c = 6, x, y, z;
	y = ((x = a + b), (b + c));
	z = (3 * 4, 4 * 5, 5*6);
	printf("y = %d, x = %d, z = %d\n", y, x, z);
	return 0;
}
