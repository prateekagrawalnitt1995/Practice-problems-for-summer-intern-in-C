//Simple Link List impleentation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* next;
};
struct node* A, *temp, *temp1; //This is not the same as writing
								//struct node* A, temp, temp1

int main()
{
	A=NULL;
	
	temp=(struct node*)malloc(sizeof(struct node));
	A=temp;
	(*temp).data=2;
	(*temp).next=NULL;
	printf("%d,%u",(*temp).data, (*temp).next);
	return 0;
	getch();
}
