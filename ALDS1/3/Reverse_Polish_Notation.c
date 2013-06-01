#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x = 0;
	char s[100];
	int stack[100];
	int *ps;
	ps = stack;

	while(scanf("%s",s) != EOF){
		if(s[0] == '+'){
			ps--;
			*(ps-1) = *(ps-1) + *ps;
		}else if(s[0] == '-'){
			ps--;
			*(ps-1) = *(ps-1) - *ps;
		}else if(s[0] == '*'){
			ps--;
			*(ps-1) = *(ps-1) * *ps;
		}else{
			x = atoi(s);
			*ps = x;
			ps++;
		}
	}
	printf("%d\n", *(ps-1));

	return 0;
}