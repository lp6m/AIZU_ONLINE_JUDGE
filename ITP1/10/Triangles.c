#include <stdio.h>
#include <math.h>

int main(void){
	double a,b;
	int C;

	scanf("%lf %lf %d", &a, &b, &C);

	double rad = C * M_PI / 180.0;
	double S = a * b * sin(rad) / 2;
	double L = a + b + sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(rad));
	double h = 2*S/a;

	printf("%lf\n", S);
	printf("%lf\n", L);
	printf("%lf\n", h);

	return 0;
}