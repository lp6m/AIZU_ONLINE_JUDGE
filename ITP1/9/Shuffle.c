#include <stdio.h>

int main(void){
	char cards[201] = {0};
	char tmp[201] = {0};
	char *cp;
	char *tp;
	cp = cards;
	tp = tmp;
	int m,h,i;
	int cnt;
	int len = 0;

	while(1){
		len = 0;
		cnt = 0;
		scanf("%s", cards);

		if(cards[0] == '-'){
			break;
		}

		while(cards[len] != '\0'){
			len++;
		}

		scanf("%d", &m);

		while(cnt != m){
			scanf("%d", &h);

			for(i = 0;i < h;i++){
				*(tp + i) = *(cp + i);
			}

			for(i = h;i < len;i++){
				*(cp + i - h) = *(cp + i);
			}

			for(i = 0;i < h;i++){
				*(cp + len - h + i) = *(tp + i);
			}

			cnt++;
		}
		puts(cards);
	}
	return 0;
}