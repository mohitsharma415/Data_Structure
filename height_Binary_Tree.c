#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;

}node;
node* head=NULL;
node* p;
node* root;
node* a[104];
int front=0;
int rear=0;
node* create_Node(int data)
{
	node* t=(node*)malloc(sizeof(node));
	t->data=data;
	t->left=NULL;
	t->right=NULL;
	return t;
}
void insert_Node(node* t)
{
	if(head==NULL)
	{
		head=t;
		root=t;
		en_queue(t);
	}
	else
	{
		if(root->left==NULL)
		{
			root->left=t;
			en_queue(t);
		}	
		else if(root->left!=NULL && root->right==NULL)
		{
			root->right=t;
			en_queue(t);
			de_queue();
		}
		root=a[front];
		
		
	}


}
int height(node* head)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		head=head->left;


	}
return count;

}
void en_queue(node* add)
{
	
	a[rear]=add;
	rear++;
}
void de_queue()
{
	front++;
}

void main()
{
	int n;
	int d;
	printf("************************Binary Tree***************************");
	printf("\n Enter no. of nodes in a binary Tree");
	scanf("%d",&n);
	printf("\n Enter data to Node");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&d);
		node* t=create_Node(d);
		insert_Node(t);

	}
	printf("\n %d",head->data);
	printf("\n %d",head->left->data);
	printf("\n %d",head->right->data);
	printf("\n %d",head->left->left->data);
	int p=height(head);
	printf("\n Height of tree is %d",p);

}