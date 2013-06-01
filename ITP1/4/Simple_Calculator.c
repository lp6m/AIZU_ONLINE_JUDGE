#include <stdio.h>

int Calc(int a,int b,char op){
	switch(op){
		case '+':
			return a + b;
			break;
		case '-':
			return a - b;
			break;
		case '*':
			return a * b;
			break;
		case '/':
			return a / b;
			break;
		default:
			break;
	}
}
int main(void){
	int a,b;
	char op;

	while(1){
		scanf("%d %s %d", &a, &op, &b);

		if(op == '?'){
			break;
		}

		if(a >= 0 && a <= 20000 && b >= 0 && b <= 20000){
			printf("%d\n", Calc( a, b, op));
		}
	}

	return 0;
}