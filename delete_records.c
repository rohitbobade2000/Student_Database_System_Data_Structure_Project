#include"header.h"
void delete_all(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("\033[1;31mNo records available to delete...!\033[0m\n");
		return;
	}
	SLL *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=del->next;
	}
	printf("--------------------------------------------\n");
	printf("\033[1;31mDeleted All Records Successfully...!\033[0m\n");
	printf("--------------------------------------------\n");
}
void delete_node(SLL **ptr)
{
	if(*ptr==0)
	{
		//printf("Record Not Available\n");
		printf("\033[1;31mRecords Not Available...!\033[0m\n");
		return;
	}
	char op;
	printf("Enter your option\n\033[1;34mR/r: Delete by roll no.\nN/n: Delete by name\033[0m\n");
	scanf(" %c",&op);
	if(op>='a' && op<='z')
		op=op-32;
	switch(op)
	{
		case 'N':delete_name(ptr); break;
		case 'R':delete_roll(ptr); break;
		default : printf("Invalid Option\n");
	}

}
void delete_name(SLL **ptr)
{
	char s[30];
	int c=0;
	printf("Enter the name to delete\n");
	scanf(" %s",s);
	SLL *del=*ptr,*prev;
	while(del)
	{
		if(strcmp(del->name,s)==0)
		{
			printf("%d %s %f\n",del->rno,del->name,del->mks);
			c++;
		}
		del=del->next;
	}
	if(c==0)
		printf("\033[1;31mName not available\033[0m\n");
	else if(c==1)
	{
		del=*ptr;
		while(del)
		{
			if(strcmp(del->name,s)==0)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				printf("--------------------------------------------\n");
				printf("\033[1;31mDeleted Succesfully...!\033[0m\n");
				printf("--------------------------------------------\n");
				return;
			}
			prev=del;
			del=del->next;
		}
	}
	else
	{
		printf("\033[1;31mName present multiple times...!\033[0m\n");
		delete_roll(ptr);
	}
}

void delete_roll(SLL **ptr)
{
	SLL *del=*ptr,*temp;
	int roll;
	printf("Enter the Roll no to delete\n");
	scanf("%d",&roll);
	while(del)
	{
		if(del->rno==roll)
		{
			if(del==(*ptr))
				*ptr=del->next;
			else
				temp->next=del->next;
			free(del);
			printf("--------------------------------------------\n");
			//printf("Deleted Succesfully...!\n");
			printf("\033[1;31mDeleted Succesfully...!\033[0m\n");
			printf("--------------------------------------------\n");
			return;
		}
		temp=del;
		del=del->next;
	}
	printf("\033[1;31mRoll no. not available in Record\033[0m\n");
}

