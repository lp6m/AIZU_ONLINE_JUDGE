#include <stdio.h>

int combination(int n,int x){
	int i,j,k;
	int cnt = 0;

	for(i = 1;i <= n-2;i++){
		for(j = i+1;j <= n-1;j++){
			for(k = j+1;k <= n;k++){
				if(i + j + k == x){
					cnt++;
				}
			}
		}
	}

	return cnt;
}

int main(void){
	int n,x,i,j,k;
	int cnt = 0;

	while(1){
		scanf("%d %d", &n, &x);

		if((n == 0 && x == 0) || (n < 3 || n > 100)){
			return 0;
		}

		printf("%d\n", combination(n,x));
	}
	return 0;
}