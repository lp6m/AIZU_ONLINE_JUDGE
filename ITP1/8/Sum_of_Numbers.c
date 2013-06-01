#include <stdio.h>

int main(void){
	char number[1001];
	char *np;
	int i,sum;
	np = number;

	while(1){
		scanf("%s", number);
		if(number[0] == '0'){
			return 0;
		}

		sum = 0;

		for(i = 0; *(np+i) != '\0';i++){
			sum += *(np+i) - '0';
		}
		printf("%d\n", sum);
	}

	return 0;
}