#include"stdafx.h"
#include<cstdio>
#include<algorithm>
using namespace std;
//方法一
/*
class Node
{
public:
	int num;
	int dis;
	Node* next;
	Node* pre;
};

class cycleLinkList
{
public:
	cycleLinkList();
	void insert_back(int num, int dis);
	int find_nearest(int prenum,int lastnum);
	//void displayAll(void);
private:
	Node* head;
};
cycleLinkList::cycleLinkList() 
{ 
	head = new Node;
	head->num = 0;
	head->pre = head;
	head->next = 
	head;head->dis = 0; 
}
void cycleLinkList::insert_back(int num, int dis) {
	Node* pre = head->next;
	while (pre->next!=head)
	{
		pre = pre->next;
	}
	Node* new_Node=new Node;
	new_Node->dis = dis;
	new_Node->num = num;
	new_Node->next = head;
	new_Node->pre = pre;
	pre->next->pre = new_Node;
	pre->next = new_Node;
}
int cycleLinkList::find_nearest(int prenum, int lastnum) {
	Node* pre = head->next;
	while (pre->num != prenum)
	{
		pre = pre->next;
	}
	int predistance=0,nextdistance=0;
	Node* pre_dir = pre;
	while (pre_dir->num != lastnum)
	{
		pre_dir = pre_dir->pre;
		predistance += pre_dir->dis;
		
	}
	Node* next_dir = pre;
	while (next_dir->num != lastnum)
	{
		nextdistance += next_dir->dis;
		next_dir = next_dir->next;
	}
	if (nextdistance >= predistance)return predistance;
	else return nextdistance;

}
/*
void cycleLinkList::displayAll(void)
{
	Node* _head = head->next;
	while (_head != head)
	{
		printf("%d  %d\n", _head->num, _head->dis);
		_head = _head->next;
	}
	printf("pre\n");
	_head = head->pre;
	while (_head != head)
	{
		printf("%d  %d\n", _head->num, _head->dis);
		_head = _head->pre;
	}
}*/

/*
int main()
{
	int n,m,dis;
	scanf("%d", &n);
	cycleLinkList data;
	for (int i = 0; i < n; i++){
		scanf("%d", &dis);
		data.insert_back(i + 1, dis);
	}
	//data.displayAll();
	//printf("insert");
	scanf("%d", &m);
	for (int i = 0; i < m; i++){
		int pre_num, last_num;
		scanf("%d%d", &pre_num,&last_num);
		printf("%d\n",data.find_nearest(pre_num, last_num));	
	}
	return 0;
}
*/
//方法二
/*
int main()
{
	int dis[100005],n,m,total_dis=0;
	memset(dis, 0, (100005*sizeof(int)));
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &dis[i]);
		total_dis += dis[i];
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int prenum, lastnum,nextdis=0;
		scanf("%d%d", &prenum, &lastnum);
		if (prenum > lastnum) { int temp = prenum;prenum = lastnum;lastnum = temp; }
		
		for (int j = prenum - 1;j < lastnum - 1;j++)
			nextdis += dis[j];
		if (total_dis - nextdis >= nextdis) printf("%d\n", nextdis);
		else printf("%d\n", total_dis-nextdis);
	}
	return 0;
}
*/
//方法三
int main()
{
	int dis[100005], n, m, total_dis = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int temp;
		scanf("%d", &temp);
		dis[i] = total_dis;
		total_dis += temp;
		//printf("i: %d dis:%d  total:%d\n", i, dis[i],total_dis);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int prenum, lastnum;
		scanf("%d%d", &prenum, &lastnum);
		if (prenum > lastnum) swap(prenum, lastnum);
		int temp = dis[lastnum-1] - dis[prenum-1];
		printf("%d\n",min(temp,total_dis-temp));
	}
	return 0;
}