#include <stdio.h>

int main(void)
{
	int arr[5][5] = { 0 };
	int ans[5][5] = { 0 };
	int cnt = 0;
	int flag = 1;
	int line = 1;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf("%d", &ans[i][j]);
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				for (int l = 0; l < 5; ++l)
				{
					if (arr[k][l] == ans[i][j])
					{
						arr[k][l] = 0;
						cnt++;
					}
				}

			}
		}
	}
	
}