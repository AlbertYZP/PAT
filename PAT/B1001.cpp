#include <cstdio>

int main()
{
	int value,step_num=0;
	scanf("%d",&value);
	if(value<0||value>1000) return -1;
	while(value!=1)
	{
		if(value%2==0) value =value/2;
		else value=(3*value+1)/2;
		step_num++;
	}
	printf("%d",step_num);
	return 0;
}