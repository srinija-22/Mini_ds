#include"header.h"
void stud_del(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No records found\n");
		return ;
	}
	char op,name[20];
	int rollno;
	printf("n/N->delete by name\nr/R->delete by rollno\n");
	scanf(" %c",&op);
	SLL *del=*ptr,*prev;
	switch(op)
	{
		case 'n':
		case 'N':scanf("%s",name);
			while(del)
			{
				if(strcmp(name,del->name)==0)
				{
					if(del==*ptr)
						*ptr=del->next;
					else
						prev->next=del->next;

					free(del);
					return ;
				}
				prev=del;
				del=del->next;
			}
			printf("Name not found\n");
			break;
		case 'r':
		case 'R':scanf("%d",&rollno);
			while(del)
			{
				if(rollno==del->rollno)
				{
					if(del==*ptr)
						*ptr=del->next;
					else
						prev->next=del->next;

					free(del);
					return ;
				}
				prev=del;
				del=del->next;
			}
			printf("rollno not found\n");
			break;
	}
}
