#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
	
};

    struct node* head;
	struct node* q;
	struct node* r;
	struct node* p;
	struct node* v;
	struct node* w;
struct node* create_Node(int data)
{
	struct node* t= (struct node* )malloc(sizeof(struct node));
	t->data=data;
	t->left=NULL;
	t->right=NULL;
	return t;
}
void create_Doubly_List(int value)
{
	if(head==NULL)
	{
		head=create_Node(value);
		q=head;
		p=head;
		v=head;
	}
	else
	{
		while(q->right!=NULL)
		{
			q=q->right;
		}
		r=create_Node(value);
		q->right=r;
		r->left=q;
		q=q->right;
	}



}
void delete_Node(int data)
{
	while(p->right->data!=data)
	{
		p=p->right;
	}
	p=p->right;
	p->left->right=p->right;

}
/*void reverse_List()
{
	while(v->right!=NULL)
	{
		v=v->right;


	}
	head=v;

}
*/
int main()
{
create_Doubly_List(5);

create_Doubly_List(15);

create_Doubly_List(20);

create_Doubly_List(25);
struct node * s= head->right->right;
//s->left->right=s->right;
//delete_Node(20);

printf("%d \n",head->data);
printf("%d \n",head->right->data);
printf("%d \n",head->right->right->data);
//printf("%d \n",head->right->right->right->data);

//printf("%d \n",head->right->right->right->data);
//printf("%d \n",head->right->right->right->left->data);

}



