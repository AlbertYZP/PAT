#include "stdafx.h"
#include<cstdio>
int main()
{
	int A, DA, B, DB, PA=0, PB=0;
	int bit;
	scanf("%d%d%d%d", &A, &DA, &B, &DB);
	while (A||B)
	{
		bit = A % 10;
		A = A / 10;
		if (bit == DA) PA = PA * 10 + DA;
		bit = B % 10;
		B = B / 10;
		if (bit == DB) PB = PB * 10 + DB;
	}
	printf("%d", PA + PB);
	return 0;
}