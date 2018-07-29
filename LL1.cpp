#include<stdio.h>
#include<iostream>
using namespace std;
struct node {
	int data;
	struct node *next;
}*start;
node* createnode(int value)
{
	struct node *temp;
	temp=new(struct node);
	temp->data=value;
	temp->next=NULL;
	return temp;
}
void insertbeg()

{
	struct node *p;
	p=createnode(45);
	cout<<p->data;
	p=createnode(42);
	cout<<p->data;
	p=createnode(90);
	if(start==NULL)
	{
		start=p;
		p->next=NULL;
	}
	else
	{
		p->next=start;
		start=p;
	}
}
void insertlast()
{
	struct node *p,*temp;
	p=createnode(12);
		temp=start;
	while(temp->next!=NULL)
	{
		temp->next=temp;
	}
	temp->next=p;
	p->next=NULL;
}
int main()
{
	start=NULL;
	insertbeg();
	insertlast();
	struct node *txt=start;
	while(txt!=NULL)
	{
		cout<<txt->data<<endl;
		txt=txt->next;
	}
	return 0;
}
