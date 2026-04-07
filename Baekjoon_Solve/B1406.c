#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 백준 1406 에디터
// 링크드 리스트 사용해야됨
#if 01
char sen[100001] = NULL;
char cmd;
char temp;
char change;
int m = 0;
int csr;

void insertdata()
{
	scanf("%s", &sen[1]);
	scanf("%d", &m);
}
void command()
{
	csr = strlen(sen);
	for (int i = 0; i < m; ++i)
	{
		scanf("%c", &cmd);
		switch (cmd)
		{
			case 'P':
				scanf("%c", &temp);
				sen[csr++] = temp;
				continue;
			case 'L':
				if (csr == 0) continue;
				sen[csr--] = sen[csr - 1];
				continue;
			case 'D':
				if (csr == strlen(sen)) continue;
				sen[csr++] = sen[csr + 1];
				continue;
			case 'B':
				if (csr == 0) continue;
				sen[csr-1]
		}
	}
}
int main(void)
{
	insertdata();

}
#endif