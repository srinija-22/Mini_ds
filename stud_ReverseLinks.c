#include"header.h"
void stud_reverseLinks(SLL **ptr)
{
if(*ptr==0)
{
printf("No records found\n");
return ;
}
int i,c=countNode(*ptr);
SLL **a,*t=*ptr;
if(c>1)
{
a=malloc(sizeof(SLL *)*c);
/////////////////Storing addresses//////////////////
for(i=0;i<c;i++)
{
a[i]=t;
t=t->next;
}
/////////////////////////////////////////////////////
//////////Modifying the Links////////////////////////
for(i=c-1;i>0;i--)
a[i]->next=a[i-1];

a[0]->next=0;
*ptr=a[c-1];
}
}
