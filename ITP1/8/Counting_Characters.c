#include <stdio.h>

int main(void){
	char ch;
	int cnt[26] = {0};
	int i,len;

	while(scanf("%c", &ch) != EOF){
		if(ch >= 'a' && ch <= 'z'){
			cnt[ch - 'a']++;
		}else if(ch >= 'A' && ch <= 'Z'){
			cnt[ch - 'A']++;
		}
	}

	len = sizeof(cnt) / sizeof(cnt[0]);

	for(i = 0;i < len;i++){
		printf("%c : %d\n", 'a' + i, cnt[i]);
	}
	return 0;
}