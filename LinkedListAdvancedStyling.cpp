#include<conio.h>
#include<stdio.h>
#include<stdlib.h> //To enable malloc

int Ask();
int EnterData();
int PrintList();

//-----Start-----//
//Defining structure 'Node" of LinkedList
struct node
{
	int data;
	struct node *next;
};
//----end---//
struct node *head, *temp, *temp1;

node *NewNode(int x);

int x, ask;
char Ans;

//--------------------------------MAIN starts here-----------------------//
int main()
{
	NewNode(1);
	(*temp).data=NULL;
	(*temp).next=NULL;
	head=temp;
	temp1=temp;

	printf("Do you want to enter a data into LL?(y/n)\n");
	scanf("%c",&Ans);

	if(Ans=='y'||Ans=='Y')
	{
		x=1;
	}
	else
	{
		x=0;
	}
	printf("\nEnter the data:");
	scanf("%d",&(*temp).data);

//-------------------Start-------------//
//If user wants to enter more than one node do the following steps:
//1) Ask whether she/he wants to one more data value?
//2) If YES,
			//Create a newnode
			//Assign this to previous node's next
			//Enter data
			//Reask if want to enter more?
//3) If NO,
			//Print the Linked List and exit.
	do
	{
		ask=Ask();
		if(ask==1)
			{
				NewNode(x);
				(*temp1).next=temp;
				EnterData();
			}
	}while(ask==1);

PrintList();
//------------------End---------------//
return 0;
getch();
}
//-------------------------MAIN Ends------------------------------//


//-----------------Start------------//
//Function to ask whether the user wants to add one more data value?
int Ask()
{
	printf("\nDo you want to Enter more data?(y/n):\n");
	fflush(stdin);

	scanf("%c",&Ans);

	if(Ans=='y'||Ans=='Y')
	{
		x=1;
	}
	else
	{
		x=0;
	}
	return x;
}
//------------------end---------------//


//------------------start--------------//
//Function to CREATE a NewNode
node *NewNode(int x)
{
	{
		temp=(struct node *)malloc(sizeof(struct node));
		x=0;
		(*temp).next=NULL;
		return temp;
	}
	
}
//---------------end-----------------//


//------------Start-------------------//
//Funtion to ENTER DATA into newnode
int EnterData()
{
	printf("\nEnter Data:\n");
	scanf("%d",&(*temp).data);
	temp1=temp;//Assigns this nodes address to the previous node's next
}
//---------------end------------------//


//-------------start-------------------//
//Function to PRINT the LL
int PrintList()
{
	printf("\nYou don't want to enter more. GoodBye\n");
	
	int count=0;
	for(temp=head;(temp)!=0;temp=(*temp).next)
	{
		count=count+1;
		printf("Data in Node%d is %d\n",count,(*temp).data);
	}
}
//--------------------end-------------//
