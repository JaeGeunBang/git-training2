#include<stdio.h>
// test 6.2
int main()
{
	int kor, eng, math;
	int sum = 0;

	math = 80;
	eng = 100;
	kor = 90;
	sum = 80 + 100 + 90;

	printf("This program print report card.\n");

	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("Sum : %d\n", sum);
<<<<<<< HEAD
<<<<<<< HEAD
	printf("Average : %d\n", sum/3);
=======
>>>>>>> f0d6174... report card: Show the sum of each grade
=======
	printf("Average : %d\n", sum/3);
>>>>>>> cfc9749... report card: Get a average of grades
	return 0;
}
