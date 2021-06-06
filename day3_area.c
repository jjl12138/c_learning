#include <math.h>
#include <stdio.h>

int main()
{
	double a, b, c, s, area;
	printf("Please input a, b, c:\n");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	s = 1.0/2 * (a + b + c);
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a = %7.2g, b = %7.2g, c = %7.2g, s = %7.2g\n", a, b, c, s);
	printf("area = %7.2f\n", area);
	return 0;
} 
