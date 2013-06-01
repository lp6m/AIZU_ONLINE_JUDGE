#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define SUIT 4
#define RANK 13

int main(void){
	int n;/*cards you have*/
	int rank;
	int i,j;
	char mark;
	char *sp = "SHCD";

	int cards[SUIT][RANK] = {FALSE};

	scanf("%d", &n);

	if(n > 52){
		return 0;
	}

	/*check cards you have*/
	for(i = 0;i < n;i++){
		scanf("%s %d", &mark, &rank);
		if(rank >= 1 && rank <= RANK){
			for(j = 0;j < SUIT;j++){
				if(mark == *(sp + j)){
					cards[j][rank - 1] = TRUE;
					break;
				}
			}
		}else{
			return 0;
		}
	}

	/*output cards you dont have*/
	for(i = 0;i < SUIT;i++){
		for(j = 0;j < RANK;j++){
			if(cards[i][j] == FALSE){
				printf("%c %d\n", *(sp + i), j + 1);
			}
		}
	}

	return 0;
}