#include <stdio.h>
#include <math.h>

int main(void){
	int score[1001] = {0};
	int n,i;
	double m;
	double sum1 = 0;
	double sum2 = 0;

	while(1){
		scanf("%d", &n);
		if(n == 0){
			break;
		}

		sum1 = 0;
		sum2 = 0;

		for(i = 0;i < n;i++){
			scanf("%d",&score[i]);
			sum1 += score[i];
		}

		m = sum1 / (double)n;

		for(i = 0;i < n;i++){
			//sum2 += pow((double)(score[i] - m), 2.0);
			sum2 += (score[i]-m)*(score[i]-m);
		}

		printf("%lf\n", sqrt(sum2 / n));
	}

	return 0;
}