#include<stdio.h>
#define MAX_N 3

int main(){

	int matrice[5][5];

	matrice[0][0] = 9;
	matrice[0][1] = 3;
	matrice[0][2] = 5;
	matrice[0][3] = 2;
	matrice[0][4] = 4;


	matrice[1][0] = 7;
	matrice[1][1] = 2;
	matrice[1][2] = 36;
	matrice[1][3] = 1;
	matrice[1][4] = 4;


	matrice[2][0] = 4;
	matrice[2][1] = 8;
	matrice[2][2] = 2;
	matrice[2][3] = 3;
	matrice[2][4] = 2;

	matrice[3][0] = 75;
	matrice[3][1] = 0;
	matrice[3][2] = 6;
	matrice[3][3] = 4;
	matrice[3][4] = 6;

	matrice[4][0] = 8;
	matrice[4][1] = 9;
	matrice[4][2] = 4;
	matrice[4][3] = 0;
	matrice[4][4] = 5;

	int i;
	int j;

	for(i = 0 ; i < 5 ;i++ ){
		printf("\n");
		for(j = 0 ; j < 5 ;j++ ){
			printf("( %d )",matrice[i][j]);

		}

	}

	printf("\n");
	printf("\n");
	printf("\n");

	for(i = 0 ; i < 5 ;i++ ){
		printf("\n");
		printf("les pics de la %deme ligne sont: ",i+1);
		for(j = 0 ; j < 5 ;j++ ){
			if( matrice[i][j]>= matrice[i][j+1] && matrice[i][j]>=matrice[i][j-1] && matrice[i][j]>= matrice[i-1][j] && matrice[i][j]>= matrice[i+1][j]){

			printf(" %d ",matrice[i][j]);
			}
		}

	}



}
