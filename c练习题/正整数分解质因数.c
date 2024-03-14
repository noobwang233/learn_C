#include<stdio.h>

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
    printf("ÇëÊäÈëÕûÊı£º");
	scanf("%d",&n);
	int s[n];
	printf("%d=");
	findy(n,s);
    return 0;
}
