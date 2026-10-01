#include"header.h"
void stud_show(SLL *ptr)
{
if(ptr==0)
{
printf("No records found\n");
return ;
}
while(ptr)
{
printf("--------------------------------------------------------\n");
printf("Roll no.  Name  Percentage\n");
printf("--------------------------------------------------------\n");
printf("%d  %s  %f\n",ptr->rollno,ptr->name,ptr->percentage);
printf("--------------------------------------------------------\n");
ptr=ptr->next;
}
}
