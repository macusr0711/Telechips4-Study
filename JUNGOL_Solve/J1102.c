#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 01

int n = 0;
int arr[102] = { 0 };
int arr_num = 0;
int num;
int cnt = 0;
int a = 0;
char cmd;

void push(int num)
{
	arr[arr_num++] = num;
}
void pop()
{
	if (arr_num <= 0)
	{
		printf("empty\n");
		return;
	}	
	printf("%d\n", arr[--arr_num]);
}
void print()
{
	if (arr_num < 0) printf("0\n");
	else printf("%d\n", arr_num);
}
int main(void)
{
	int temp;
	scanf("%d", &n);
	while (cnt != n)
	{
		scanf("%c", &cmd);
		switch (cmd)
		{
		case 'i':
			scanf("%d", &num);
			push(num);
			cnt++;
			continue;
		case 'o':
			pop();
			cnt++;
			continue;
		case 'c':
			print();
			cnt++;
			continue;
		}
	}
}
#endif