//Subscript Method
#include<stdio.h>
void display(int p[2][2],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");						
	}
}
void main()
{
	int a[2][2]={50,60,70,80};
	display(a,2,2);
}
