#include <stdio.h>

int gcd(int x,int y){
	int z = y % x;
	if(x % z == 0){
		return z;
	}else{
		gcd( z, x);
	}
}

int main(void){
	int a,b;

	scanf("%d %d", &a, &b);

	if(a == 1 || b == 1){
		printf("1\n");
	}
	else if(a == b){
		printf("%d\n", a);
	}
	else if(1 < a && a < b){
		printf("%d\n", gcd( a, b));
	}
	else if(1 < b && b < a){
		printf("%d\n", gcd( b, a));
	}

	return 0;
}