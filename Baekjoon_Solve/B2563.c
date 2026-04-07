#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 백준2563 색종이
#if 0

int paper[101][101] = { 0 };
int color = 0;
int x = 0;
int y = 0;
int cnt = 0;

void insertdata()
{
	scanf("%d", &color);
	for (int i = 0; i < color; ++i)
	{
		scanf("%d %d", &x, &y);
		for (int j = 0; j < 10; ++j)
		{
			for (int k = 0; k < 10; ++k)
			{
				paper[x + j][y + k] = 1;
			}
		}
	}
}
void check()
{
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if (paper[i][j] == 1) cnt++;
		}
	}
	printf("%d", cnt);
}
int main(void)
{
	insertdata();
	check();
}
#endif