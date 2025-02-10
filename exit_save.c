#include"header.h"
void exit_file(SLL *ptr)
{
	char op;
	printf("Enter option to exit!\n\033[1;34mS/s: Save and exit\nE/e: Exit without save\033[0m\n");
	scanf(" %c",&op);
	if(op>='a' && op<='z')
		op-=32;
	switch(op)
	{
		case 'S':save_file(ptr); printf("\033[1;32m               ...THANK YOU...\033[0m\n"); 
		printf("********************************************\n");exit(0);
		case 'E':printf("\033[1;32m               ...THANK YOU...\033[0m\n");
		printf("********************************************\n");exit(0);
	}
}
void save_file(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\033[1;31mNo Record To Save\033[0m\n");
		return;
	}
	sort_rollno(ptr);
	FILE *fp=fopen("data.txt","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rno,ptr->name,ptr->mks);
		ptr=ptr->next;
	}
	printf("--------------------------------------------\n");
	//printf("Data saved succesfully\n");
	printf("\033[1;32mData Saved Succesfully...!\033[0m\n");
	printf("--------------------------------------------\n");
	fclose(fp);
}

void read_file(SLL **ptr)
{
	FILE *fp=fopen("data.txt","r");
	SLL *new,*last;
	if(fp==0)
		return;
	while(1)
	{
		new=(SLL *)malloc(sizeof(SLL));
		if(fscanf(fp,"%d %s %f",&new->rno,new->name,&new->mks)==EOF)
		{
			free(new);
			break;
		}
		new->next=0;
		if(*ptr==0)
			*ptr=new;
		else
		{
			last=*ptr;
			while(last->next)
				last=last->next;
			last->next=new;
		}
	}
	fclose(fp);
}

