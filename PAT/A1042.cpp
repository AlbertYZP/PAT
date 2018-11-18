#include"stdafx.h"
#include<cstdio>

int main()
{
	int k,start[54],option[54],end[54];
	char label[5] = { 'S','H','C','D','J' };
	for (int i = 1;i <= 54;i++) start[i - 1] = i;
	scanf("%d", &k);
	for (int i = 0;i < 54;i++) scanf("%d", &option[i]);
	for (int i = 0; i < k; i++){
		for (int j = 0;j < 54;j++)
		{
			end[option[j]-1] = start[j];
		}
		for (int j = 0;j < 54;j++) start[j] = end[j];
	}
	for (int i = 0;i < 54;i++) {
		printf("%c", label[int((end[i] - 1) / 13)]);
		printf("%d", (end[i]-1)%13+1);
		if (i != 53) printf(" ");
	}
	return 0;
}