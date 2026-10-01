#include"header.h"
int main()
{
	SLL * headptr=0;
	int c;
	char op;
	while(1)
	{
		printf("Enter ypur choice:\n");
		printf("a/A->addRecord\n d/D->deleteRecord\ns/S->showRecord\nm/M->ModifyRecord\nv/V->saveRecord\nt/T->sortList\nl/L->deleteAll\nR->revereseLinks\ne/E->exit\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a':
			case 'A': stud_add(&headptr); break;
			case 'd':
			case 'D': stud_del(&headptr); break;
			case 's':
			case 'S': stud_show(headptr); break;
			case 'm':
			case 'M': stud_mod(headptr); break;
			case 'v':
			case 'V': stud_save(headptr); break;
			case 't':
			case 'T': stud_sort(headptr); break;
			case 'l':
			case 'L': stud_deleteAll(&headptr); break;
			case 'r':
			case 'R': stud_reverseLinks(&headptr); break;
			case 'e':
			case 'E':exit(0);

			default:printf("Unknown option\n"); break;
		}
	}
}
