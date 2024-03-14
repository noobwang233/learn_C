#include<stdio.h>

int findmaxb(int n,int m)
{
	
	int i=(n>m)?n:m;
	for(;i<=n*m;i++)
	{
		if(i%n==0&&i%m==0)
		return i;
	}
}

int findminy(int n,int m)
{
	
	int i=(n<m)?n:m;
	for(;i>=1;i--)
	{
		if(n%i==0&&m%i==0)
		return i;
	}
}

int main()
{
    int n,m;
    printf("请输入整数：");
	scanf("%d %d",&n,&m);
	printf("这两个数的最大公约数是%d，最小公倍数是%d\n",findminy(n,m),findmaxb(n,m));
    return 0;
}
