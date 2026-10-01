#include"header.h"
void stud_save(SLL *ptr)
{
if(ptr==0)
{
printf("No records found\n");
return ;
}
FILE *fp;
fp=fopen("student.dat","w");
while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
printf("Data saved in File\n");
fclose(fp);
}
