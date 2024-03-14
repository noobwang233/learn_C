#include<stdio.h>

int ispr(n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}

int findy(int n,int s[])
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		printf("%d*",i);
		n=n/i;
		findy(n,s);
		return 0;
		}
	}
	if(i==n)
	printf("%d\n",n);
}

int main()
{
    int n;
    printf("ÇëÊäÈëÕûÊý£º");
	scanf("%d",&n);
	int s[n];
	printf("%d=");
	findy(n,s);
    return 0;
}
