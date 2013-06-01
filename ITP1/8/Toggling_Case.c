#include <stdio.h>
#include <ctype.h>

int main(void){
	char c;

	while(1){
		scanf("%c",&c);

		if(c == '\n'){
			printf("\n");
			return 0;
		}

		if(islower(c)){
			printf("%c", toupper(c));
		}else if(isupper(c)){
			printf("%c", tolower(c));
		}else{
			printf("%c", c);
		}
	}

	return 0;
}