#include <stdio.h>
#define SWAP(a,b) {int temp; temp = a; a = b; b = temp;}

int main(void){
	int a,b,c;

	scanf("%d %d %d", &a, &b ,&c);

	while(!(a <= b && b <= c)){
		if(a > b) SWAP(a,b);
		if(b > c) SWAP(b,c);
	}

	printf("%d %d %d\n", a, b, c);

	return 0;
}