#include"header.h"
void reverse_record(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("\033[1;31mNo Records Available\033[0m\n");
		return;
	}
	int c=count_node(*ptr);
	SLL **arr,*temp=*ptr;
	if(c>1)
	{
		arr=(SLL **)malloc(sizeof(SLL*)*c);
		int i=0;
		while(temp)
		{
			arr[i++]=temp;
			temp=temp->next;
		}
		for(i=1;i<c;i++)
			arr[i]->next=arr[i-1];
		arr[0]->next=0;
		*ptr=arr[c-1];
	}
	printf("--------------------------------------------\n");
	printf("\033[1;32mRecords Reverse Successfully...!\033[0m\n");
	printf("--------------------------------------------\n");
}
int count_node(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

