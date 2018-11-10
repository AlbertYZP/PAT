#include"stdafx.h"
#include<cstdio>

int main()
{
	int n,A_speak,A_hand,B_speak,B_hand,A_drink=0,B_drink=0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d%d%d%d", &A_speak, &A_hand, &B_speak, &B_hand);
		if (A_hand == A_speak + B_speak && B_hand != A_speak + B_speak) B_drink++;
		if (A_hand != A_speak + B_speak && B_hand == A_speak + B_speak) A_drink++;
	}
	printf("%d %d", A_drink, B_drink);
	return 0;
}