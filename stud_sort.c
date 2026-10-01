#include"header.h"
void stud_sort(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No records found\n");
		return ;
	}
	SLL *p1=ptr,*p2,t;
	int i,j;
	int c=countNode(ptr);
	char op;
	printf("n/N->sort with name\np/P->sort with percentage\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'n':
		case 'N':
			for(i=0;i<c-1;i++)
			{
				p2=p1->next;
				for(j=0;j<c-1-i;j++)
				{
					if(strcmp(p1->name,p2->name)>0)
					{
						strcpy(t.name,p1->name);
						t.percentage=p1->percentage;

						strcpy(p1->name,p2->name);
						p1->percentage=p2->percentage;

						strcpy(p2->name,t.name);
						p2->percentage=t.percentage;
					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			break;

		case 'p':
		case 'P':for(i=0;i<c-1;i++)
			 {
				 p2=p1->next;
				 for(j=0;j<c-1-i;j++)
				 {
					 if(p1->percentage > p2->percentage)
					 {
						 strcpy(t.name,p1->name);
						 t.percentage=p1->percentage;

						 strcpy(p1->name,p2->name);
						 p1->percentage=p2->percentage;

						 strcpy(p2->name,t.name);
						 p2->percentage=t.percentage;
					 }
					 p2=p2->next;
				 }
				 p1=p1->next;
			 }
			 break;
	}
}
