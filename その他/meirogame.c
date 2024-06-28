#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int meiro[13][13];
	int branch[5][5];
	int k = 0;
	//–À˜H‚Ì‰Šú‰» ‚O“¹@‚P•Ç@ŠOü‚Q
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13; j++) {
			meiro[i][j] = 1;
		}
	}
	for (int i = 0; i < 13; i++) {
		meiro[0][i] = 2;
		meiro[12][i] = 2;
		meiro[i][0] = 2;
		meiro[i][12] = 2;
	}

	srand(time(0)); //‰º‚O@ã‚P@¶‚Q@‰E‚R
	int x = 2, y = 2,random,i,j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			while (branch[i][j] != 1
				||k <=50) {
				random = rand() % 4;
				if (random == 0) {
					if (meiro[2 + 2 + (i * 2)][2 + (j * 2)] != 2
						&&meiro[2 + 1 + (i * 2)][2 + (j * 2)] != 0){
						meiro[2 + (i * 2)][2 + (j * 2)] = 0;
						meiro[2 + 1 + (i * 2)][2 + (j * 2)] = 0;
						meiro[2 + 2 + (i * 2)][2 + (j * 2)] = 0;
						branch[i][j] = 1;
					}
					
				}
				if (random == 1) {
					if (meiro[2 + (-2)+ (i * 2)][2 + (j * 2)] != 2
						&& meiro[2 + (-1) + (i * 2)][2 + (j * 2)] != 0) {
						meiro[2 + (i * 2)][2 + (j * 2)] = 0;
						meiro[2 + (-1) + (i * 2)][2 + (j * 2)] = 0;
						meiro[2 + (- 2) + (i * 2)][2 + (j * 2)] = 0;
						branch[i][j] = 1;
					}
					
				}
				if (random == 2) {
					if (meiro[2 + (i * 2)][2 + (-2)+(j * 2)] != 2
						&& meiro[2 + (i * 2)][2 + (-1) + (j * 2)] != 0) {
						meiro[2 + (i * 2)][2 + (j * 2)] = 0;
						meiro[2 + (i * 2)][2 + (-1)+(j * 2)] = 0;
						meiro[2 + (i * 2)][2 + (-2)+(j * 2)] = 0;
						branch[i][j] = 1;
					}
					
				}
				if (random == 3) {
					if (meiro[2 + (i * 2)][2 + 2 +(j * 2)] != 2
						&& meiro[2 + (i * 2)][2 + 1 + (j * 2)] != 0) {
						meiro[2 + (i * 2)][2 + (j * 2)] = 0;
						meiro[2 + (i * 2)][2 + 1 +(j * 2)] = 0;
						meiro[2 + (i * 2)][2 + 2 +(j * 2)] = 0;
						branch[i][j] = 1;
					}
					
				}
				k++;
			}
		}
	}
	for (int i = 1; i < 12; i++) {
		for (int j = 1; j < 12; j++) {
			if (meiro[i][j] == 0) {
				printf("  ");
			}
			else {
				printf("¡ ");
			}
		}
		printf("\n");
	}

}