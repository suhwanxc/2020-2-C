//file : basicpointer.c
#include <stdio.h>

int main(void)
{
	char c = '@';
	char* pc = &c;
	int m = 100;
	int* pm = &m;
	double x = 5.83;
	double* px = &px;

	printf("������      �ּҰ�           ���尪 \n");
	printf("%3s     %12p     %9c\n", "c", pc, c);
	printf("%3s     %12p     %9c\n", "m", pm, m);
	printf("%3s     %12p     %9c\n", "x", px, x);

	return 0;
}