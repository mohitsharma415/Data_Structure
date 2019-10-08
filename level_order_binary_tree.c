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
int count=0;
int c[104];
int h=0;
node* b[104];
node* e[104];
int insrt=0;
int front_1=0;
int rear_1=0;
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

enqueue(node* root)
{
	e[rear_1]=root;
	rear_1++;
}
node* dequeue()
{
	
	return e[front_1++];
}

// Printing Nodes at each level
nodes_at_each_level(node* root)
{
	while(root)
	{ 
		printf("\n level order traversal is %d",root->data);
		if(root->left!=NULL)
		{
			enqueue(root->left);
		}
		if(root->left!=NULL)
		{

			enqueue(root->right);
		}
			root=dequeue();



	}

}



/* Stack */
push(node* add)
{
b[count]=add;
count++;

}
pop()
{
count--;
}

void lef()
{
printf("leaf nodes are");
while(c[h]!=NULL)
{
printf("%d",c[h]);
h++;
}
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
	printf("\n counting the height of the tree");
	nodes_at_each_level(head);
	
	lef();
	
}
