#include"stdafx.h"
#include<cstdio>
int pow1(int a)
{
	if (a % 2 == 0)return 1;
	else return -1;
}
int main()
{
	int N, N_value[1000], A[5] = {0,0,0,0,0},A_num[5]= { 0,0,0,0,0 };
	scanf("%d", &N);
	for (int i = 0;i < N;i++) scanf("%d", &N_value[i]);
	for (int i = 0;i < N;i++)
	{
		switch (N_value[i]%5)
		{
			case 0: 
			{
				if (N_value[i] % 2 == 0)
				{
					A[0] += N_value[i];
					A_num[0]++;
				}
				break;
			}
			case 1:
			{
				A[1] += pow1(A_num[1])*N_value[i];
				A_num[1]++;
				break;
			}
			case 2: 
			{
				A_num[2]++;
				break;
			}
			case 3: 
			{
				A[3] += N_value[i];
				A_num[3]++;
				break;
			}
			case 4: 
			{
				if (N_value[i] > A[4]) 
				{
					A[4] = N_value[i];
					A_num[4]++;
				}
				break;
			}
			default:
				break;
		}
	}
	if (A_num[0] == 0)printf("N ");
	else printf("%d ", A[0]);
	if (A_num[1] == 0)printf("N ");
	else printf("%d ", A[1]);
	if (A_num[2] == 0)printf("N ");
	else printf("%d ", A_num[2]);
	if (A_num[3] == 0)printf("N ");
	else printf("%.1f ", float(A[3])/A_num[3]);
	if (A_num[4] == 0)printf("N");
	else printf("%d", A[4]);
	return 0;
}
