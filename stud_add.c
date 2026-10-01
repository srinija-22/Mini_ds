#include"header.h"
void stud_add(SLL **ptr)
{
	SLL *new,*prev,*temp;
	int rollno=1;
	new=malloc(sizeof(SLL));
	printf("Enter name and percentage:\n");
	scanf("%s",new->name);
	scanf("%f",&new->percentage);
	temp=*ptr;
	while(temp!=0)
	{
		if(temp->rollno==rollno)
			rollno++;
		else if(temp->rollno > rollno)
			break;
		temp=temp->next;
	}
	new->rollno=rollno;
	temp=*ptr;
	prev=0;
	while(temp!=0 && temp->rollno < new->rollno)
	{
		prev=temp;
		temp=temp->next;
	}
	new->next=temp;
	if(prev==0)
		*ptr=new;
	else
		prev->next=new;
}
