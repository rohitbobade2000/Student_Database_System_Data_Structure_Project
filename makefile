student: main.o reverse_record.o sort_record.o modify.o exit_save.o delete_records.o add_print_record.o
	cc main.o reverse_record.o sort_record.o modify.o exit_save.o delete_records.o add_print_record.o -o student
main.o: main.c
	cc -c main.c
reverse_record.o: reverse_record.c
	cc -c reverse_record.c
sort_record.o: sort_record.c
	cc -c sort_record.c
modify.o: modify.c
	cc -c modify.c
exit_save.o: exit_save.c
	cc -c exit_save.c
delete_records.o: delete_records.c
	cc -c delete_records.c
add_print_record.o: add_print_record.c
	cc -c add_print_record.c
clear:
	@@echo "Cleaning up..."
	@@rm -v *.o

