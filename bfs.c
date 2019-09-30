#include<stdio.h>
#include<stdlib.h>
int n;
int visited[104]={0};
int a[104][104];
int que[104]={0};
int arr[104];
int front=1,rear=1;
int count=1;
int ano=1;
bf_search(int b[104][104],int v)
{   
	
	que[front]=v;
	rear++;
	
	while(que[front]!=NULL)
	{   
   		
		
		while(count<=n)
		{	
			
			if(b[v][count]==1 )
			{
				que[rear]=count;
				rear++;
				
			}	
			count++;
			
		}
		
			
		count=1;
		front++;
		v=que[front];
		
	}
    while(que[ano]!=NULL)
	{	
		int t=que[ano];
		
		if(visited[t]!=1)
		{
			printf("%d",t);
		}
		visited[t]=1;
		ano++;
		


	}


	
	



}

void main()
{
	int l;
	
	
	printf("*************BFS***************\n");
	printf("ENTER NO. OF VERTEX IN THE GRAPH");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
	
		
		for(int j=1;j<=n;j++)
		{
		
		
			printf("enter the element at a[%d][%d] ", i,j);
		
			scanf("%d",&a[i][j]);
		
		}
	
	}
	printf("\n enter the start node for bfs");
	
	scanf(" %d",&l);
	
	bf_search(a,l);
}

