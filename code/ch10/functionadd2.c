//file: functionadd2.c
#include <stdio.h>

//int add2(int a, int b); //이 위치도 가능

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b); //int add2(int , int )도 가능

	//위 함수변형이 없으면 함수호출에서 발생
	int sum = add2(a, b);
	printf("합: %d\n", sum);
	return 0;
}
int add2(int a, int b)
{
	int sum = a + b;
	return(sum);
}
int findMin2(int x, int y)
{
	int min = x < y ? x : y;
	return(min);
}