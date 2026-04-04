#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 01

int n = 0;
int x = 0;
int *arr;
int cnt = 0;
int num = 0;

int compare(int *a, int *b)
{
	return (*a - *b);
}
void insertdata()
{
	scanf("%d", &n);
	arr = (int *)calloc(1, n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
}
void printdata()
{
	int index = n - 1;
	qsort(arr, n, sizeof(int), compare);
	while(num < index)
	{
		if (arr[num] + arr[index] == x)
		{
			cnt++;
			index--;
			continue;
		}
		if (arr[num] + arr[index] > x)
		{
			index--;
			continue;
		}
		if (arr[num] + arr[index] < x)
		{
			num++;
			continue;
		}
	}
	printf("%d", cnt);
}
int main(void)
{
	insertdata();
	printdata();
}
#endif