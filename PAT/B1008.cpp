#include"stdafx.h"
#include<cstdio>

int main()
{
	int n, m,a[100],temp;
	scanf("%d%d", &n, &m);
	for(int i=0;i < n;i++) scanf("%d",&a[i]);
	m = m % n;
	for (int i = 0;i <n;i++)
	{
		if (i < m) printf("%d", a[n - m  + i]);
		else printf("%d", a[i - m]);
		if (i != n - 1) printf(" ");
	}
	return 0;
}