#include <stdio.h>

int main()
{
	int i = 8;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", i, ++i, --i, i++, i--, -i++, -i--); // �Ӻ���ǰ�㣺-8��-7�� 8�� 8, 8, 8  ����������� 
	return 0;
}
