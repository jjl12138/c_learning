#include <stdio.h>

int main()
{
	int p, w, s;
	double d, f;
	printf("input p, w, s\n");
	scanf("%d%d%d", &p, &w, &s);
	if(p < 0 || w < 0 || s <0){
		printf("input error!please input again:\n");
		scanf("%d%d%d", &p, &w, &s);
	}
	else
	{
		if(s < 250){
			d = 0;
		}
		else if(s < 500){
			d = 0.02;
		}
		else if(s < 1000){
			d = 0.05;
		}
		else if(s < 2000){
			d = 0.08;
		}
		else if(s < 3000){
			d = 0.1;
		}
		else
		{
			d = 0.15;
		}
	}
	f = p * w * s * (1-d);
	printf("%lf\n", f);
	return 0;
}
