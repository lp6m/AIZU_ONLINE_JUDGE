#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100 + 1
int main(void){
	char taro[MAX_LENGTH],hanako[MAX_LENGTH];
	int n,t_score = 0,h_score = 0;

	scanf("%d", &n);

	while(n--){
		scanf("%100s %100s", taro, hanako);

		if(strcmp(taro, hanako) > 0){
			t_score += 3;
		}
		else if(strcmp(taro, hanako) < 0){
			h_score += 3;
		}
		else{
			t_score++;
			h_score++;
		}
	}

	printf("%d %d\n", t_score, h_score);

	return 0;
}