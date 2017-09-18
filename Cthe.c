#include <stdio.h>

int main()
{
	float a = 2, b, c, d = 0, f ;
	float sum = 0;;
	float n;
	float i;
	b = a / 2;
	a = b;
	c = a*a;

	sum = sum + c;
	f = sum - d;
	printf("%f-%f=%f\n", sum, d, f);
	d = d + c;

	while (f >= 0.000001) {
		b = a / 2;
		a = b;
		c = a*a;

		sum = sum + c;
		f = sum - d;
		printf("%f-%f=%f\n", sum, d, f);
		d = d + c;
	}
	
	getchar();
	getchar();
	getchar();
    return 0;
}