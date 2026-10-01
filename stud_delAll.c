#include"header.h"
void stud_deleteAll(SLL **ptr)
{
if(*ptr==0)
{
printf("No records found\n");
return ;
}
int c=1;
SLL *del=*ptr;
while(del)
{
*ptr=del->next;
printf("Node deletdn:%d\n",c++);
sleep(1);
free(del);
del=*ptr;
}
printf("All nodes deleted\n");
}
