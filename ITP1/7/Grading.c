#include <stdio.h>

int main(void){
	int m,f,r;

	while(1){
		scanf("%d %d %d", &m, &f, &r);
		if(m == -1 && f == -1 && r == -1){
			return 0;
		}

		if(m <= 50 && m >= -1 && f <= 50 && f >= -1 && r <= 100 && r >= -1){
			if(m == -1 || f == -1){
				printf("F\n");
			}else if(m + f >= 80){
				printf("A\n");
			}else if(65 <= m + f && m + f < 80){
				printf("B\n");
			}else if((50 <= m + f && m + f < 65) || (30 <= m + f && m + f < 50 && r >= 50)){
				printf("C\n");
			}else if(30 <= m + f && m + f < 50){
				printf("D\n");
			}else{
				printf("F\n");
			}
		}else{
			return 0;
		}
	}

	return 0;
}