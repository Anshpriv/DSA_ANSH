#include<stdio.h>
int main()
{
    int m,n,z;
    printf("Enter the rows:");
    scanf("%d" , &m);
    printf("enter the columns:");
    scanf("%d", &n);
    int i,j,k;
    int X[m][n] ,Y[m][n], Z[m][n];
    int ch;
    printf("Addition\n");
    printf("subtraction\n");
    printf("multiplication\n");
    printf("transpose\n");
    printf("Enter your choice");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
    printf("enter the values for 1 value: \n");
    for(int i=0; i<m;i++)
    {
    for (int j=0; j<n; j++)
    {
    printf("ELEMENTS: (%d, %d):\n ", i+1, j+1);
    scanf("%d" , &X[i][j]);
    	}
    	}
    
  
  
   printf("enter the values for 2 matrix:\n");
    for(int i=0; i<m;i++)
    {
    for (int j=0; j<n; j++)
    {
    printf("ELEMENTS: (%d, %d):\n ", i+1, j+1);
    scanf("%d" , &Y[i][j]);
    	}
    }
    
    printf("Addition of matrix:\n");
    for(int i =0; i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		Z[i][j]=X[i][j]+Y[i][j];
    		printf("%d ", Z[i][j]);
    	}
    	printf("\n");
    }
    break;
    
    case 2:
    printf("enter the values for 1 value: /n");
    for(int i=0; i<m;i++)
    {
    for (int j=0; j<n; j++)
    {
    printf("ELEMENTS: (%d, %d): \n", i+1, j+1);
    scanf("%d" , &X[i][j]);
    	}
    	}
    
  
  
   printf("enter the values for 2 matrix:/n");
    for(int i=0; i<m;i++)
    {
    for (int j=0; j<n; j++)
    {
    printf("\nELEMENTS: (%d, %d):/n ", i+1, j+1);
    scanf("%d" , &Y[i][j]);
    	}
    }
    
    printf("Subtraction of matrix:\n");
    for(int i =0; i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		Z[i][j]=X[i][j]-Y[i][j];
    		printf("\n%d", Z[i][j]);
    	}
    	printf("\n");
    }
    break;
    
    case 3:
    printf("enter the values for 1 value: /n");
    for(int i=0; i<m;i++)
    {
    for (int j=0; j<n; j++)
    {
    printf("ELEMENTS: (%d, %d): \n", i+1, j+1);
    scanf("%d" , &X[i][j]);
    	}
    	}
    
  
  
   printf("enter the values for 2 matrix:/n");
    for(int i=0; i<m;i++)
    {
    for (int j=0; j<n; j++)
    {
    printf("\nELEMENTS: (%d, %d):/n ", i+1, j+1);
    scanf("%d" , &Y[i][j]);
    	}
    }
    
    printf("Multiplication of matrix:\n");
    for(int i =0; i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		Z[i][j]=X[i][j]*Y[i][j];
    		printf("%d", Z[i][j]);
    	}
    	printf("\n");
    }
    break;
   }
   return 0;
   }
