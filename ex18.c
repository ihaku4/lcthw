#include <stdio.h>

int sorted_order(int a, int b)
{
	return a - b;
}

int main(int argc, char *argv[])
{
	int (*tester)(int a, int b) = sorted_order;
	printf("TEST: %d is same as %d\n", tester(2, 3), sorted_order(2, 3));
}
