#include"stdafx.h"
#include<map>
#include<cstdio>
using namespace std;

int main()
{
	int n,school,score;
	map<int, int> score_Sum;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d%d", &school, &score);
		if (score_Sum.find(school) != score_Sum.end())//ע��������û���ҵ����ͷ��ص������һ�����ݵĺ���һ��λ�ã�Ҳ����score_Sum.end()
		{
			score_Sum[school] += score;
		}
		else
		{
			score_Sum[school] = score;
		}
	}
	school = score = 0;
	map<int, int>::iterator it = score_Sum.begin();//��������map�ĵ�����
	for (;it != score_Sum.end();it++)
	{
		if (it->second > score)
		{
			school = it->first;
			score = it->second;
		}
	}
	printf("%d %d", school, score);

	return 0;
}
