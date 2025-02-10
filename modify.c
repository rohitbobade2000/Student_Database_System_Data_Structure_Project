#include "header.h"
void modify_record(SLL *ptr)
{
	if(ptr==0)
	{
		printf("--------------------------------------------\n");
		printf("\033[1;31mNo Records Available...!\033[0m\n");
		printf("--------------------------------------------\n");
		return;
	}
	char op;
	printf("Enter your choice...!\n");
	printf("\033[1;34mR/r: Search by roll no.\nN/n: Search by Name\nP/p: Search Percentage based\033[0m\n");
	scanf(" %c",&op);
	if(op>='a' && op<='z')
		op-=32;
	switch(op)
	{
		case 'R':modi_rollno(ptr);break;
		case 'N':modi_name(ptr);break;
		case 'P':modi_percentage(ptr);break;
		default:printf("Invalid Option\n");
	}
}
void modi_name(SLL *ptr)
{
	char n[20];
	printf("Enter the name to Search\n");
	scanf("%s",n);
	SLL *temp=ptr,*temp1=ptr;
	char op;
	int c=0;
	while(temp1)
	{
		if(strcmp(temp1->name,n)==0)
		{
			c++;
			printf("%d %s %f\n",temp1->rno,temp1->name,temp1->mks);
			temp=temp1;
		}
		temp1=temp1->next;
	}
	if(c==0)
	{
		printf("--------------------------------------------\n");
		printf("\033[1;31mName not Available in Record\033[0m\n");
		printf("--------------------------------------------\n");
	}
	else if(c==1)
	{
		printf("Enter what you to want modify\n");
		printf("\033[1;34mN/n: Name\nP/p: Percentage\033[0m\n");
		scanf(" %c",&op);
		if(op>='a' && op<='z')
			op-=32;
		if(op=='n'||op=='N')
		{
			printf("Enter the New Name...\n");
			scanf("%s",temp->name);
			printf("--------------------------------------------\n");
			printf("\033[1;32mName modified successfully...!\033[0m\n");
			printf("--------------------------------------------\n");
			return;
		}
		else if(op=='p' || op=='P')
		{
			printf("Enter the New Percentage...\n");
			float fm;
			scanf("%f",&fm);
			if(fm>=0 && fm<=100)
			{
				temp->mks=fm;
				printf("--------------------------------------------\n");
				printf("\033[1;32mPercentage modified successfully...!\033[0m\n");
				printf("--------------------------------------------\n");
			}
			else
			{
				printf("--------------------------------------------\n");
				printf("\033[1;31mPercentage not in Range...!\033[0m\n");
				printf("--------------------------------------------\n");
			}
			return;
		}
		else
			printf("Invalid Option\n");
		return;
	}
	else
	{
		printf("\033[1;31mName Available Multiple times...!\033[0m\n");
		modi_rollno(ptr);
	}
}

void modi_percentage(SLL *ptr)
{
	float m;
	printf("Enter the percentage to Search\n");
	scanf("%f",&m);
	SLL *temp=ptr,*temp1=ptr;
	char op;
	int c=0;
	while(temp1)
	{
		if(temp1->mks==m)
		{
			c++;
			printf("%d %s %f\n",temp1->rno,temp1->name,temp1->mks);
			temp=temp1;
		}
		temp1=temp1->next;
	}
	if(c==0)
	{
		printf("--------------------------------------------\n");
		printf("\033[1;31mPercentage Not found, Try again & Enter correct Percentage\033[0m\n");
		printf("--------------------------------------------\n");
	}
	else if(c==1)
	{
		printf("Enter what you to want modify\n");
		printf("\033[1;34mN/n: Name\nP/p: Percentage\033[0m\n");
		scanf(" %c",&op);
		if(op>='a' && op<='z')
			op-=32;
		if(op=='n'||op=='N')
		{
			printf("Enter the New Name...\n");
			scanf("%s",temp->name);
			printf("--------------------------------------------\n");
			printf("\033[1;32mName modified successfully...!\033[0m\n");
			printf("--------------------------------------------\n");
			return;
		}
		else if(op=='p' || op=='P')
		{

			printf("Enter the New Percentage...\n");
			float fm;
			scanf("%f",&fm);
			if(fm>=0 && fm<=100)
			{
				temp->mks=fm;
				printf("--------------------------------------------\n");
				printf("\033[1;32mPercentage modified successfully...!\033[0m\n");
				printf("--------------------------------------------\n");
			}
			else
			{
				printf("--------------------------------------------\n");
				printf("\033[1;31mPercentage not in Range...!\033[0m\n");
				printf("--------------------------------------------\n");
			}
			return;
		}
		else
			printf("Invalid Option\n");
		return;
	}
	else
	{
		printf("\033[1;31mPercentage Available Multiple times...!\033[0m\n");
		modi_rollno(ptr);
	}
}
void modi_rollno(SLL *ptr)
{
	int roll;
	printf("Enter roll no to Search\n");
	scanf("%d",&roll);
	SLL *temp=ptr;
	char op;
	while(temp)
	{
		if(temp->rno==roll)
		{
			printf("Enter what you to want modify\n");
			printf("\033[1;34mN/n: Name\nP/p: Percentage\033[0m\n");
			scanf(" %c",&op);
			if(op>='a' && op<='z')
				op-=32;
			if(op=='n'||op=='N')
			{
				printf("Enter the New Name...\n");
				scanf("%s",temp->name);
				printf("--------------------------------------------\n");
				printf("\033[1;32mName modified successfully...!\033[0m\n");
				printf("--------------------------------------------\n");
				return;
			}
			else if(op=='p' || op=='P')
			{

				printf("Enter the New Percentage...\n");
				float fm;
				scanf("%f",&fm);
				if(fm>=0 && fm<=100)
				{
					temp->mks=fm;
					printf("--------------------------------------------\n");
					printf("\033[1;32mPercentage modified successfully...!\033[0m\n");
					printf("--------------------------------------------\n");
				}
				else
				{
					printf("--------------------------------------------\n");
					printf("\033[1;31mPercentage not in Range...!\033[0m\n");
					printf("--------------------------------------------\n");
				}
				return;

			}
			else
				printf("Invalid Option\n");
			return;
		}
		temp=temp->next;
	}
	printf("--------------------------------------------\n");
	printf("\033[1;31mRoll No. Not found...\033[0m\n");
	printf("--------------------------------------------\n");
}














