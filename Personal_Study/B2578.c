#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// B2578 : ºù°í
#if 0
int main(void)
{
	int arr[5][5] = { 0 };
	int ans[25] = { 0 };
	int cnt = 0;
	int line = 0;
	int flag = 1;
	int zero1 = 0;
	int zero2 = 0;
	int zero3 = 0;
	int zero4 = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 25; ++i)
	{
		scanf("%d", &ans[i]);
	}
	for (int i = 0; i < 25; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				if (arr[j][k] == ans[i])
				{
					arr[j][k] = 0;
					cnt++;
				}
			}
		}
		line = 0;
		for (int j = 0; j < 5; ++j)
		{
			if (line == 3)
			{
				flag = 0;
				break;
			}
			if (arr[j][j] == 0) zero3++;
			if (zero3 == 5) line++;
			if (line == 3)
			{
				flag = 0;
				break;
			}
			if (arr[j][4 - j] == 0) zero4++;
			if (zero4 == 5) line++;
			if (line == 3)
			{
				flag = 0;
				break;
			}
		}
		zero3 = 0;
		zero4 = 0;
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				if (line == 3)
				{
					flag = 0;
					break;
				}
				if (arr[j][k] == 0) zero1++;
				if (zero1 == 5) line++;
				if (line == 3)
				{
					flag = 0;
					break;
				}
				if (arr[k][j] == 0) zero2++;
				if (zero2 == 5) line++;
				if (line == 3)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 0) break;
			zero1 = 0;
			zero2 = 0;
		}
		if (flag == 0) break;
	}
	printf("%d", cnt);
}
#endif