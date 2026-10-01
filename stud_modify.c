#include"header.h"
void stud_mod(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No records found\n");
		return ;
	}
	int flag=0,f=0;
	char name[20],op;
	int rollno;
	float percentage;
	SLL *temp=ptr;
	printf("r/R->search by rollno\nn/N->search by name\np/P->search by percentage\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'r':
		case 'R':scanf("%d",&rollno); 
			while(ptr)
			{
				if(rollno==ptr->rollno)
				{
					flag=1;
					printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
					printf("Enter name and percentage to update:\n");
					/*scanf("%s",name);
					  scanf("%f",&percentage);
					  strcpy(ptr->name,name);
					  ptr->percenatge=percentage;*/
					scanf("%s",ptr->name);
					scanf("%f",&ptr->percentage);
				}
				ptr=ptr->next;
			}
			if(flag==0)
				printf("%d not found\n",rollno);
			break;


		case 'n':
		case 'N': temp=ptr;
			scanf("%s",name);
			while(ptr)
			{
				if(strcmp(name,ptr->name)==0)
				{
					flag=1;
					printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
				}
				ptr=ptr->next;
			}
			if(flag==0)
			{
				printf("%d not found\n",rollno);
				break;
			}
			printf("Enter rollno to update:\n");
			scanf("%d",&rollno);
			//temp=ptr;
			f=0;
			while(temp!=0)
			{
				if(temp->rollno == rollno && strcmp(temp->name,name)==0)
				{
					printf("%d %s",temp->rollno,temp->name);
					printf("Enter details to update:\n");
					scanf("%s",name);
					strcpy(temp->name,name);
					scanf("%f",&temp->percentage);
					f=1;
					break;
				}
				temp=temp->next;
			}
			break;


		case 'p':
		case 'P':temp=ptr;
			scanf("%f",&percentage);
		       while(ptr)
		       {
			       if(ptr->percentage==percentage)
			       {
				       flag=1;
				       printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			       }
			       ptr=ptr->next;
		       }
		       if(flag==0)
		       {
			       printf("%s not found\n",name);
			       break;
		       }
		       printf("Enter rollno to update:\n");
		       scanf("%d",&rollno);
		       //temp=ptr;
		       f=0;
		       while(temp!=0)
		       {
			       if(temp->rollno == rollno && temp->percentage==percentage)
			       {
				       printf("%d %f",temp->rollno,temp->percentage);
				       printf("Enter details to update:\n");
				       scanf("%s",name);
					strcpy(temp->name,name);
				       scanf("%f",&temp->percentage);
				       f=1;
				       break;
			       }
			       temp=temp->next;
		       }
		       break;
	}
}
