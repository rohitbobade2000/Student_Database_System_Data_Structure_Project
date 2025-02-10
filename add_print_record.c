#include"header.h"
void add_std(SLL **ptr)
{
	SLL *new,*temp,*prev=*ptr;
	int troll;
	sort_rollno(*ptr);
	new=(SLL *)malloc(sizeof(SLL));
	printf("Enter the name & Percentage\n");
	scanf("%s %f",new->name,&new->mks);
	if((*ptr==0) || ((*ptr)->rno>1))
	{
		new->next=*ptr;
		new->rno=1;
		*ptr=new;
		return;
	}
	else
	{
		temp=*ptr;
		troll=(*ptr)->rno;
		while((temp->next!=0) || (troll!=temp->rno))
		{
			if(troll!=temp->rno)
			{
				new->rno=troll;
				new->next=prev->next;
				prev->next=new;
				printf("--------------------------------------------\n");
				printf("\033[1;32mData Added Successfully...!\033[0m\n");
				printf("--------------------------------------------\n");
				return;
			}
			prev=temp;
			temp=temp->next;
			troll++;
		}
		new->rno=troll+1;
		new->next=0;
		temp->next=new;
	}
	printf("--------------------------------------------\n");
	//printf("Data Added Successfully...!\n");
	printf("\033[1;32mData Added Successfully...!\033[0m\n");
	printf("--------------------------------------------\n");
}

void print_node(SLL *ptr)
{
	system("clear");
	if(ptr==0)
	{
		printf("-----------------------------------------------------\n");
		//printf("No Record found\n");
		printf("\033[1;31mNo Record Found...!\033[0m\n");
		printf("-----------------------------------------------------\n");
		return;
	}
	char r[10]="Roll No.",n[20]="Name",m[10]="Marks";
	printf("======================================================\n");
	printf("*******************STUDENT RECORDS********************\n");
	printf("| %s%c %17s %16c%6s |\n",r,'|',n,'|',m);
	printf("======================================================\n");
	while(ptr)
	{
		printf("|    %.2d   %-15c%-10s %10c %5.1f |\n",ptr->rno,'|',ptr->name,'|',ptr->mks);
		ptr=ptr->next;
	}
	printf("------------------------------------------------------\n");
}

