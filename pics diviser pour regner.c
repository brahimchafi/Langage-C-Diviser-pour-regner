#include<stdio.h>


int main(){
	
	int matrice[4][4];
	
	
	
	matrice[0][0] = 6;
	matrice[0][1] = 20;
	matrice[0][2] = 15;
	matrice[0][3] = 15;
	
	matrice[1][0] = 7;
	matrice[1][1] = 10;
	matrice[1][2] = 14;
	matrice[1][3] = 14;
	
	matrice[2][0] = 9;
	matrice[2][1] = 16;
	matrice[2][2] = 180;
	matrice[2][3] = 32; 
	
	matrice[3][0] = 1;
	matrice[3][1] = 16;
	matrice[3][2] = 32;
	matrice[3][3] = 1; 
	
	
	
	
	int i,j;
	for(i = 0 ; i < 4 ;i++ ){
		printf("\n");
		for(j = 0 ; j < 4 ;j++ ){
		
			printf(" (%d) ",matrice[i][j]);
		}	
	} 
	
	int pic(int p,int q,int ligne, int colonne){
		
		int ml = p+ligne/2;
		int mc = q+colonne/2;
		
			if(matrice[ml][mc]>= matrice[ml][mc+1] && matrice[ml][mc]>=matrice[ml][mc-1] && matrice[ml][mc]>= matrice[ml-1][mc] && matrice[ml][mc]>= matrice[ml+1][mc]){
				return matrice[ml][mc];
			}
		
			if(matrice[ml][mc]<matrice[ml-1][mc] && matrice[ml][mc]<matrice[ml][mc-1]){
				return pic(p,q,ml,mc);
			}
			
			if(matrice[ml][mc]<matrice[ml-1][mc] && matrice[ml][mc]<matrice[ml][mc+1]){
				return pic(p,mc+1,ml-1,colonne);
				}		
			if(matrice[ml][mc]<matrice[ml][mc-1] && matrice[ml][mc]<matrice[ml+1][mc]){
				return pic(ml+1,q,ligne,mc-1);
				} 
			if(matrice[ml][mc]<matrice[ml][mc+1] && matrice[ml][mc]<matrice[ml+1][mc]){
				return pic(ml+1,mc+1,ligne,colonne);
						}
			}
		
		
	
	printf("\n____\n\n");
	int k = pic(0,0,4,4);
	printf("le premier pic trouv%c est : %d",130,k);
	
	
	
	printf("\n____\n\n");
	
	
	
	matrice[0][0] = 30;
	matrice[0][1] = 4;
	matrice[0][2] = 4;
	matrice[0][3] = 15;
	
	matrice[1][0] = 7;
	matrice[1][1] = 21;
	matrice[1][2] = 14;
	matrice[1][3] = 14;
	
	matrice[2][0] = 9;
	matrice[2][1] = 11;
	matrice[2][2] = 10;
	matrice[2][3] = 32; 
	
	matrice[3][0] = 1;
	matrice[3][1] = 3;
	matrice[3][2] = 13;
	matrice[3][3] = 18; 
	
	
	
	for(i = 0 ; i < 4 ;i++ ){
		printf("\n");
		for(j = 0 ; j < 4 ;j++ ){
		
			printf(" (%d) ",matrice[i][j]);
		}	
	} 
	
	printf("\n____\n\n");
	k = pic(0,0,4,4);
	printf("le premier pic trouv%c est : %d",130,k);
}
