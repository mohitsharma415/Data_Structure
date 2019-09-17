/* floyd warshell implemented by Mohit Sharma reg no. 19mcmb13*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int edge;
int d=0;
warshell(int b[104][104],int edge1)
{
	for(int k=0;k<edge1;k++)
	{
		for(int i=0;i<edge1;i++)
		{
			for(int l=0;l<edge1;l++)
			{
				if(i==l)
				{
				 	b[i][l]=0;
				
				}

				else if(i==k && i!=l)
				{
					b[i][l]=b[i][l];
				}
				else
				{

				 b[i][l]=min1(b[i][l],b[i][k]+b[k][l]);
				}
				

			}		
		}			
	}

printf("multipel source sortest path is :");
printf("\n");

printf("    A  B  C  D");

for(int p=0;p<edge1;p++)
{   
	   printf("\n");
		printf(" %c  ",65+d);
				d++;
		
        
	for(int q=0;q<edge1;q++)
		{
		  printf("%d  ",b[p][q]);
		}
	printf("\n");
}

}
int min1(int n1,int n2)
{
return(n1>n2) ? n2 : n1;

}
void main()
{   int count=0;
	int a[104][104];
	
	printf("enter the no. of edge :");
	scanf("%d",&edge);
	
	for(int i=0;i<edge;i++)
	{  
		
		printf("enter elements row %d", count );
		for(int j=0;j<edge;j++)
			{   

				
				scanf("%d",&a[i][j]);

			}
		count++;

	}
       warshell(a,edge);



}