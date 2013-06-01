#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char s1[1001];
	char s2[] = " .\n";
	char w[11];
	char end[] = "END_OF_TEXT";
	char *tok;
	char *tp;
	int i;
	int cnt = 0;

	scanf("%s", w);

	for(i = 0;i< sizeof(w)/sizeof(w[0]);i++){
		w[i] = tolower(w[i]);
	}

	while(1){
		scanf("%s", s1);
		/*divide sentences to token*/
		tok = strtok( s1, s2);

		while(tok != NULL){
			if(strcmp(end,tok) == 0){
				printf("%d\n", cnt);
				return 0;
			}
			/*set token pointer*/
			tp = tok;

			while(*tok != '\0'){
				*tok = tolower(*tok);
				++tok;
			}
			/*set again*/
			tok = tp;

			if(strcmp(w,tok) == 0){
				cnt++;
			}
			tok = strtok(NULL,s2);
		}
	}

	return 0;
}