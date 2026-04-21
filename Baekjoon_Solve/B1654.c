#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 01
int *arr;
int k = 0;
int	n = 0;
int l = 1;
int r = 0;
int m = 1;
int big = 1;

void inputdata()
{
	scanf("%d %d", &k, &n);
	arr = (int *)calloc(1, sizeof(int) * k);
	for (int i = 0; i < k; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

int compare(const int *a, const int *b)
{
	return (*a - *b);
}

void inputdata()
{
	scanf("%d %d", &k, &n);
	arr = (int *)calloc(1, sizeof(int) * k);
	for (int i = 0; i < k; ++i)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, k, sizeof(int), compare);
}


int finddata(int k, int n)
{
	r = arr[k - 1];
	while (1)
	{
		if (n == 1)
		{
			big = arr[0];
			break;
		}
		if (l > r) break;
		int temp = 0;
		m = (l + r) / 2;
		for (int i = 0; i < k; i++)
		{
			temp += (arr[i] / m);
		}
		if ((temp >= n) && (big < m)) big = m;

		int finddata(int k, int n)
		{
			qsort(arr, k, sizeof(int), compare);
			r = arr[k - 1];
			while (1)
			{
				if (!(l < r)) break;
				int temp = 0;
				m = (l + r) / 2;
				for (int i = 0; i < k; ++i)
				{
					temp += (arr[i] / m);
				}
				if (temp > n) l = m + 1;
				else if (temp < n) r = m - 1;
				else break;
			}

			return big;

			return m;

		}

		int main(void)
		{
			inputdata();
			finddata(k, n);

			printf("%d", big);
		}
#endif


		printf("%d", m);
	}
#endif


