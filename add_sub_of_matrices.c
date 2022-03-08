#include <stdio.h>

void main()	{

	int m,n;
	
	printf("Enter Order of the matrices: ");
  	scanf("%d %d", &m, &n);
  	
    int a[5][5],b[5][5];
    int i,j;
    
    printf("\n Enter %d elements of the first matrix row-wise: \n", m*n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
   
    printf("\n Enter %d elements of the Second matrix row-wise: \n", m*n);
     for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &b[i][j]);
    
    printf("\n Stored matrices are: \n");
    
    printf("First matrix is: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Second matrix is: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    int sum[5][5];
    
    for(i=0;i<m;i++)	{
        for(j=0;j<n; j++)	{
            sum[i][j] = a[i][j] + b[i][j];
    	}
	}
	
    printf("\n Addition of two matrices: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)	{
        for(j=0;j<n;j++)	{
            sum[i][j] = a[i][j] - b[i][j];
    	}
	}
	
    printf("\n Subtaction of two matrices: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
}
