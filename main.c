#include<stdio.h>
#include "header.h"
void main()
{
	SLL *headptr=0;
	char op;
	read_file(&headptr);
	while(1)
	{
		printf("\033[1;31mMENU:\033[0m\n\033[1;94mA/a: Add new record\nD/d: Delete a record\nP/p: Show the records\nM/m: Modify the records \nS/s: Save the records\nT/t: Sort the records\nL/l: Delete All the records\nR/r: Reverse the records\nE/e: Exit\033[0m\n");
		printf("Enter your choice\n");
		scanf(" %c",&op);
		if(op>='a' && op<='z')
			op=op-32;
		switch(op)
		{
			case 'A':add_std(&headptr); break;
			case 'D':delete_node(&headptr);break;
			case 'P':print_node(headptr); break;
			case 'M':modify_record(headptr);break;
			case 'S':save_file(headptr);break;
			case 'T':sort_record(headptr);break;
			case 'L':delete_all(&headptr);break;
			case 'R':reverse_record(&headptr);break;
			case 'E':exit_file(headptr);
			default : printf("Invalid Option\n");
		}
	}

}

