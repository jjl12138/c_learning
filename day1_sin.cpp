#include<math.h>
#include<stdio.h>

int main()
{
	double x,s;
	
	printf("input number:\n");
	scanf("%lf", &x);
	s = sin(x);
	printf("sin of %lf is %lf\n",x,s);
}
