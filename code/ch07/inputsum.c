//file: inputsum.c

#define _CRT_SECURE_NO_WARNINGS // scanf() ������ �����ϱ� ���� ��� ó��
#include <stdio.h>

int main(void)
{
	int i, sum, max;

	printf("1�������� ���������� ���� ���� ���� ���� �ϳ� �Է�:	");
	scanf("%d", &max);

	for (i = 1, sum = 0; i <= max; i++) //++i �� ����
		sum += i; //sum = sum +i;
	printf("\n for ������ ���� 1���� %d������ ��: %3d\n", max, sum);
	i = 1, sum = 0;
	while (i <= max)
	{
		sum += i;
		i++;
	}
	printf("while ������ ���� 1���� %d������ ��: %3d\n", max, sum);
	
	return 0;
}