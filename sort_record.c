#include"header.h"
void sort_record(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\033[1;31mNo records available\033[0m\n");
		return;
	}
	char op;
	printf("Enter the Option to sort\n");
	printf("\033[1;34mN/n: Sort with name\nP/p: Sort with percentage\033[0m\n");
	scanf(" %c",&op);
	if(op>='a' && op<='z')
		op=op-32;
	switch(op)
	{
		case 'N':sort_name(ptr);break;
		case 'P':sort_percentage(ptr);break;
		default:printf("Invalid Input\n");
	}
}
void sort_name(SLL *ptr)
{
	int i,j,c=count_node(ptr);
	SLL *p1=ptr,*p2,temp;
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(strcmp(p1->name,p2->name)>0)
			{
				temp.rno=p1->rno;
				strcpy(temp.name,p1->name);
				temp.mks=p1->mks;

				p1->rno=p2->rno;
				strcpy(p1->name,p2->name);
				p1->mks=p2->mks;

				p2->rno=temp.rno;
				strcpy(p2->name,temp.name);
				p2->mks=temp.mks;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
	printf("--------------------------------------------\n");
	printf("\033[1;32mSorted Successfully...!\033[0m\n");
	printf("--------------------------------------------\n");
}
void sort_percentage(SLL *ptr)
{
	int i,j,c=count_node(ptr);
	SLL *p1=ptr,*p2,temp;
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->mks > p2->mks)
			{
				temp.rno=p1->rno;
				strcpy(temp.name,p1->name);
				temp.mks=p1->mks;

				p1->rno=p2->rno;
				strcpy(p1->name,p2->name);
				p1->mks=p2->mks;

				p2->rno=temp.rno;
				strcpy(p2->name,temp.name);
				p2->mks=temp.mks;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
	printf("--------------------------------------------\n");
	//printf("Sorted Successfully...!\n");
	printf("\033[1;32mSorted Successfully...!\033[0m\n");
	printf("--------------------------------------------\n");
}
void sort_rollno(SLL *ptr)
{
	int i,j,c=count_node(ptr);
	SLL *p1=ptr,*p2,temp;
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->rno > p2->rno)
			{
				temp.rno=p1->rno;
				strcpy(temp.name,p1->name);
				temp.mks=p1->mks;

				p1->rno=p2->rno;
				strcpy(p1->name,p2->name);
				p1->mks=p2->mks;

				p2->rno=temp.rno;
				strcpy(p2->name,temp.name);
				p2->mks=temp.mks;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}

