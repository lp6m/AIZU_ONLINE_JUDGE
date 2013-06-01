#include <stdio.h>

int main(void){
	int i,j = 30;
	for(i = 3;i < j;i+=2){
		if(i % 10 != 5){
			printf("%d\n", i);
		}

	}

	return 0;
}