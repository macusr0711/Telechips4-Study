#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// B2578 : 빙고
#if 01
int main(void)
{
	int arr[5][5] = {0};
	int ans[25] = { 0 };
	int cnt = 0;
	int line = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf(" %d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 25; ++i)
	{
		scanf(" %d", &ans[i]);
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				if (arr[j][k] == ans[i * 5 + j])
				{

				}
			}
		}
	}
}
#endif