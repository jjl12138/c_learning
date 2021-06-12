#include <stdio.h>
#include <math.h>

int main()
{
	int s = 1;
	double pi = 0, n=1;
	while(fabs(1/n) > 1e-6)
	{
		pi += (s*(1/n));
		n += 2;
		s = -s;
	}
	pi *= 4;
	printf("%10.6f", pi);
	return 0;
}
