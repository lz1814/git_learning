#include<stdio.h>
int total=0,book[11]={0},a[11]={1};
void dfs(int step)
{
	int i;
	if(step==10 && a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]==a[7]*100+a[8]*10+a[9])
	{
		total++;printf("%d%d%d+%d%d%d=%d%d%d  %d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],total);return;
	}
	for(i=1;i<=9;i++)
	{
		if(book[i]==0)
		{
			book[i]=1;
			a[step]=i;
			dfs(step+1);
			book[i]=0;
		}
	}
	
}
int main()
{
	dfs(1);
	total/=2;
	printf("%d",total);
	
	return 0;
}
