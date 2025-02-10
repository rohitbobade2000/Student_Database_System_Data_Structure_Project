#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef struct student
{
	int rno;
	char name[20];
	float mks;
	struct student *next;
}SLL;
void add_std(SLL **);
void print_node(SLL *);
void delete_node(SLL **);
void save_file(SLL *);
void exit_file(SLL *);
void delete_name(SLL **ptr);
void delete_roll(SLL **ptr);
void read_file(SLL **ptr);
void delete_all(SLL **ptr);
void reverse_record(SLL **ptr);
int count_node(SLL *ptr);
void sort_record(SLL *ptr);
void sort_name(SLL *ptr);
void sort_percentage(SLL *ptr);
void modify_record(SLL *ptr);
void modi_rollno(SLL *ptr);
void modi_percentage(SLL *ptr);
void modi_name(SLL *ptr);
void sort_rollno(SLL *ptr);


