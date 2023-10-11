#include<stdio.h>

int main(void) {

	int n, m;
	int arr[n][m];
	
	printf("Enter rows and col for matrix: ");
	scanf("%d%d",&n,&m);
	
	// Input matrix1
	printf("Enter value for first matrix: \n");
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			printf("Enter arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	int arr1[n][m];
	
	// Input matrix2
	printf("Enter value for first matrix: \n");
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			printf("Enter arr2[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n");
	
	
	
	// Print matrix
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	int newarr[n][m];
	// Sum of matrix
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			newarr[i][j] = arr[i][j]+arr1[i][j];
		}
	}
	
	// Print matrix
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			printf("%d ", newarr[i][j]);
		}
		printf("\n");
	}
}
