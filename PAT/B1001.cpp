#include <cstdio>
int main()
{
int test_num;
long long A,B,C;
scanf("%d",&test_num);
for(int i=1;i<=test_num;i++)
{
scanf("%lld %lld %lld",&A,&B,&C);
if(A+B>C) printf("Case #%d:true\n",i);
else printf("Case #%d:false\n",i);
}
return 0;
}