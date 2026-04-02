#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 01

int main(void)
{
	char sen[102] = {0};
	scanf("%s", sen);
	int word = strlen(sen);
	for (int i = 0; i < strlen(sen); ++i)
	{
		if (sen[i] == 'd' && sen[i + 1] == 'z' && sen[i + 2] == '=') word--;
		if (sen[i] == 'l' && sen[i + 1] == 'j') word--;
		if (sen[i] == 'n' && sen[i + 1] == 'j') word--;
		if (sen[i] == '=') word--;
		if (sen[i] == '-') word--;
	}
	printf("%d", word);
}
#endif