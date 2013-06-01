#include <stdio.h>

int main(void){
	int r,c,i,j,k;

	scanf("%d %d", &r, &c);

	int data[r][c];
	int sum_r[r];
	int sum_c[c];
	int sum_all = 0;

	for(i = 0;i < r;i++){
		sum_r[i] = 0;
		for(j = 0;j < c;j++){
			scanf("%d",&data[i][j]);
			sum_r[i] += data[i][j];
		}
	}

	for(i = 0;i < c;i++){
		sum_c[i] = 0;
		for(j = 0;j < r;j++){
			sum_c[i] += data[j][i];
		}
		sum_all += sum_c[i];
	}

	for(i = 0;i < r;i++){
		for(j = 0;j < c;j++){
			printf("%d ",data[i][j]);
		}
		printf("%d\n",sum_r[i]);
		if(i == r -1){
			for(k = 0;k < c;k++){
				printf("%d ",sum_c[k]);
			}
			printf("%d\n",sum_all);
		}
	}
	return 0;
}