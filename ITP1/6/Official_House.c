#include <stdio.h>
#define BLOCK 4
#define FLOOR 3
#define ROOM 10
#define SHARP 20

int main(void){
	int i,j,k,l;
	int house[BLOCK][FLOOR][ROOM] = {0};
	int n,b,f,r,v;

	scanf("%d", &n);

	for(i = 0;i < n;i++){
		scanf("%d %d %d %d", &b, &f, &r, &v);
		house[b-1][f-1][r-1] += v;
	}

	for(i = 0;i < BLOCK;i++){
		for(j = 0;j < FLOOR;j++){
			for (k = 0; k < ROOM; k++){
				printf(" %d", house[i][j][k]);
			}
			printf("\n");
		}

		if(i != BLOCK - 1){
			for (l = 0; l < SHARP; l++){
				printf("#");
			}
			printf("\n");
		}

	}
	return 0;
}