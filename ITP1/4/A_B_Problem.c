#include <stdio.h>
#include <math.h>

int main(void){
	int a, b;

	scanf("%d %d", &a, &b);

	if(a >= 1 && a <= pow( 10.0, 9.0) && b >= 1 && b <= pow( 10.0, 9.0)){
		printf("%d %d %f\n", a / b, a % b, (double)a / (double)b);
	}

	return 0;
}