#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// B2578 : ºù°í
#if 01

int arr[5][5] = { 0 };
int cnt = 0;
int ans = 0;
int line = 0;
int zero = 0;
int x = 0;
int y = 0;

int left_diag()
{
	zero = 0;
	for (int j = 0; j < 5; ++j)
	{
		if (arr[j][j] == 0) zero++;
		if (zero == 5) return 1;
	}
	return 0;
}

int right_diag()
{
	zero = 0;
	for (int j = 0; j < 5; ++j)
	{
		if (arr[j][4 - j] == 0) zero++;
		if (zero == 5) return 1;
	}
	return 0;
}

int row_x()
{
	x = 0;
	for (int j = 0; j < 5; ++j)
	{
		zero = 0;
		for (int k = 0; k < 5; ++k)
		{
			if (arr[j][k] == 0) zero++;
			if (zero == 5) x++;
		}
	}
	return x;
}

int col_y()
{
	y = 0;
	for (int j = 0; j < 5; ++j)
	{
		zero = 0;
		for (int k = 0; k < 5; ++k)
		{
			if (arr[k][j] == 0) zero++;
			if (zero == 5) y++;
		}
	}
	return y;
}
int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 25; ++i)
	{
		scanf("%d", &ans);
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				if (arr[j][k] == ans)
				{
					arr[j][k] = 0;
					cnt++;
				}
			}
		}
		line = 0;
		line = left_diag();
		line += right_diag();
		line += row_x();
		if (line >= 3) break;
		line += col_y();
		if (line >= 3) break;
	}
	printf("%d", cnt);
}
#endif