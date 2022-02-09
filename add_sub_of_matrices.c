#include <stdio.h>

void addMatrices(int m, int n, int a[m][n], int b[m][n]){
    
    int i, j , sum[m][n];
    
    for(i=0; i<m; i ++)
        for(j=0; j<n; j++)
            sum[i][j] = a[i][j] + b[i][j];
            
    printf("\n Sum of two matrices: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    
}

void subMatrices(int m, int n, int a[m][n], int b[m][n]){
    
    int i, j , sum[m][n];
    
    for(i=0; i<m; i ++)
        for(j=0; j<n; j++)
            sum[i][j] = a[i][j] - b[i][j];
            
    printf("\n Sum of two matrices: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    
}

void readElements(int m, int n, int a[m][n], int b[m][n]){
    
    int i, j;
    
    /* First matrix */        
    printf("\n Enter %d elements of the first matrix row-wise: \n", m*n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
   
   /* Second matrix */
    printf("\n Enter %d elements of the Second matrix row-wise: \n", m*n);
     for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &b[i][j]);
}

void displayMatrices(int m, int n, int a[m][n], int b[m][n]){
    
    int i, j;
            
    printf("\n Stored matrices are: \n");
    
     /* First matrix */
    printf("First matrix is: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    /* Second matrix */
    printf("Second matrix is: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
}

void main() {
	
  int m,n,i,j;
  
  printf("Enter Order of the matrices: ");
  scanf("%d %d", &m, &n);
  
  int a[m][n] , b[m][n];

readElements(m,n,a,b);
displayMatrices(m,n,a,b);
addMatrices(m,n,a,b);
subMatrices(m,n,a,b);

}