#include<stdio.h>
#include<stdlib.h>

int** mul(int row1, int col1, int col2, int **ptr1, int **ptr2) {
	
	int **res = (int **) malloc(sizeof(int *) * row1);
	
	for(int i = 0; i < row1; i++) {
		res[i] = (int *) malloc(sizeof(int) * col2);
	}
	
	for(int i=0;i<row1;i++){
        	for(int j=0;j<col2;j++){
               	res[i][j]=0;
                	for(int k=0; k < col1; k++)
                    		res[i][j]+= ptr1[i][k]*ptr2[k][j];
        	}
	}
	return res;
}

void displayres(int **res, int row1, int col2) {

	printf("Output is : \n");	
	
	for(int i = 0; i < row1; i++) {
		for(int j = 0; j < col2; j++) {
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int **ptr1, **ptr2, **res;
	int col1, row1, col2, row2;
	
	printf("Enter row and col for first matrix : ");
	scanf("%d%d", &row1, &col1);
	
	printf("Enter row and col for second matrix : ");
	scanf("%d%d", &row2, &col2);
	
	if (row2 == col1 && row1 == col2) {
	
		ptr1 = (int **) malloc(sizeof(int *) * row1);
		ptr2 = (int **) malloc(sizeof(int *) * row2);
	
		for(int i = 0; i < row1; i++) {
			ptr1[i] = (int *) malloc(sizeof(int) * col1);
		}
	
		for(int i = 0; i < row2; i++) {
			ptr2[i] = (int *) malloc(sizeof(int) * col2);
		}
	
		printf("Enter values for matrix1 :\n");
		for(int i = 0; i < row1; i++) {
			for(int j = 0; j < col1; j++) {
				scanf("%d", &ptr1[i][j]);
			}
		}
	
		printf("Enter values for matrix2 : \n");
		for(int i = 0; i < row2; i++) {
			for(int j = 0; j < col2; j++) {
				scanf("%d", &ptr2[i][j]);
			}
		}
   
      		res = mul(row1, col1, col2, ptr1, ptr2);
      		displayres(res, row1, col2);
     
      	}
      	 
      	else {
      		printf("Invalid matrix size.\n");
      	}

     }
     
     
     
