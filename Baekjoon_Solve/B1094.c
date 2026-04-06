#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 01
int main(void)
{
	int x;
	int i = 0;
	int temp;
	int cnt = 1;
	int len;
	int stick[7] = { 64, 32, 16, 8, 4, 2, 1 };
	scanf("%d", &x);
	while (stick[i] >= x)
	{
		if (x == 64) break;
		if (stick[i + 1] <= x)
		{
			cnt = 1;
			temp = x - stick[i + 1];
			while (1)
			{
				if (temp <= 0) break;
				if (temp - stick[i + 1] < 0)
				{
					i++;
					continue;
				}
				else
				{
					temp -= stick[i + 1];
					cnt++;
					i++;
				}
			}
			break;
		}
		i++;
	}
	printf("%d", cnt);
}
#endif