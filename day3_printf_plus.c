#include <stdio.h>

int main()
{
	int i = 8;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", i, ++i, --i, i++, i--, -i++, -i--); // 从后往前算：-8，-7， 8， 8, 8, 8  从左往右输出 
	return 0;
}
