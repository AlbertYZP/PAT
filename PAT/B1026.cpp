#include"stdafx.h"
#include<cstdio>

int main()
{
	int C1, C2, Time;
	scanf("%d %d",&C1,&C2);
	Time = C2-C1;
	if (Time % 100 >= 50) Time = Time / 100 + 1;
	else  Time = Time / 100;

	printf("%02d:%02d:%02d", Time/3600, Time%3600/60, Time % 60);
	return 0;
}