/*Multiplication of two matrix*/
#include<stdio.h>
int main()
{	
	int mA,nA,mB,nB,sum=0;
	int A[100][100],B[100][100],C[100][100];
	printf("Enter the number of rows of Matrix A\n ");
	scanf("%d",&mA);
	printf("Enter the number of column of Matrix A\n ");
	scanf("%d",&nA);
	for(int i=0;i<mA;i++)
	{
		for(int j=0;j<nA;j++)
		{	
			printf("Enter %d %d element of matrix\n",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the second matrix\n");
	 
	printf("Enter the number of rows of Matrix B\n ");
	scanf("%d",&mB);
	printf("Enter the number of column of Matrix B\n ");
	scanf("%d",&nB);
	for(int i=0;i<mB;i++)
	{
		for(int j=0;j<nB;j++)
		{	
			printf("Enter %d %d element of matrix\n",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	
	if(nA==mB)
	{
		for(int i=0;i<mA;i++)
		{
			for(int j=0;j<nB;j++)
			{
				for(int k=0;k<mB;k++)
				{
					sum+=A[i][k]*B[k][j];
				}
				C[i][j]=sum;
				sum=0;
			}
		}
		printf("AxB=\n");
		for(int i=0;i<mA;i++)
		{
			for(int j=0;j<nB;j++)
			{	
				printf("%d\t",C[i][j]);
			
			}
			printf("\n");
		}
	}
	else
	{
		printf("These matrix can't be multiply\n");
	}
	
return 0;
}
