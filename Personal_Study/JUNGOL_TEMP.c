#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0

int main()
{
	int a = 0;
	int* num;
	num = &a;
	(void)scanf("%d", &a);
	printf("0X%#p %d", num, *num);
}
#endif


