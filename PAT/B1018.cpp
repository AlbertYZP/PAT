#include"stdafx.h"
#include<cstdio>
int VS(char A, char B)
{
	if (A == B) return 0;
	else if (A == 'C'&&B == 'J'|| A == 'J'&&B == 'B'|| A == 'B'&&B == 'C') return 1;
	else return -1;
}
int CharToNum(char temp)
{
	if (temp == 'B') return 0;
	else if (temp == 'C') return 1;
	else return 2;
}
char NumToChar(int temp)
{
	if (temp == 0) return 'B';
	else if (temp == 1) return 'C';
	else return 'J';
}
int main()
{
	int n, A[3] = { 0,0,0 }, B[3] = {0,0,0}, A_win[3]= { 0,0,0 }, B_win[3]= { 0,0,0 }, temp;
	scanf("%d", &n);
	char A_value, B_value;
	
	for(int i=0;i<n;i++)
	{
		getchar();//清除缓存区的\n换行
		scanf("%c %c", &A_value, &B_value);
		temp = VS(A_value, B_value);
		if (temp == 0) { A[1]++;B[1]++; }
		else if (temp == 1) 
		{ 
			A[0]++;B[2]++; 
			A_win[CharToNum(A_value)]++;
		}
		else 
		{ 
			A[2]++;B[0]++; 
			B_win[CharToNum(B_value)]++;
		}
	}
	printf("%d %d %d\n", A[0], A[1], A[2]);
	printf("%d %d %d\n", B[0], B[1], B[2]);
	int Amax=0, Bmax=0,A_index,B_index;
	for (int i = 0;i < 3;i++)
	{
		if (A_win[i] > Amax) { Amax = A_win[i];A_index = i; }
		if (B_win[i] > Bmax){Bmax = B_win[i];B_index = i;}
	}
	printf("%c %c", NumToChar(A_index), NumToChar(B_index));
	return 0;
}