#include <math.h>
#include <stdio.h>

int main()
{
	double delta, p, q, a, b, c, x1, x2;
	printf("Please input a, b, c:\n");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	delta = b*b - 4*a*c;
	p = -(b / (2*a));
	q = sqrt(delta) / (2*a);
	x1 = p + q;
	x2 = p - q;
	printf("delta = %lf, p = %f, q = %f\n", delta, p, q);
	printf("x1 = %lf, x2 = %lf\n", x1, x2);
	return 0;
}
