#include <stdio.h>

int main()
{
	double a, b;
	char ch;
	printf("input a(+, -, *, /)b:\n");
	scanf("%lf%c%lf", &a, &ch, &b);
	switch(ch){
		case '+': printf("%lf\n", a+b);break;
		case '-': printf("%lf\n", a-b);break;
		case '*': printf("%lf\n", a*b);break;
		case '/': printf("%lf\n", a/b);break;
		default:printf("input error\n"); 
	}
	return 0;
}
