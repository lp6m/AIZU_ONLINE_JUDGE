#include <stdio.h>

void Draw(int h,int w){
	int i,j;
	for(i = 0;i < h;i++){
		if(i == 0 || i == h - 1){
			for(j = 0;j < w;j++){
				printf("#");
			}
		}else{
			for(j = 0;j < w;j++){
				if(j == 0 || j == w - 1){
					printf("#");
				}else{
					printf(".");
				}
			}
		}
		printf("\n");
	}

	printf("\n");

	return;
}

int main(void){
	int H,W;

	while(1){
		scanf("%d %d", &H, &W);

		if(H == 0 && W == 0){
			break;
		}else if(H <= 300 && W <= 300){
			Draw( H, W);
		}
	}

	return 0;
}