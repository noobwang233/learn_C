#include <stdio.h> 
#include <string.h> 
int isprimenumber(int n);

int main()
{
	int num;
	printf("请输入一个数:");
	scanf("%d",&num);
	int i,flag;
	flag=0;
	for(i=2;i<=num/2;i++)
	{
		if(isprimenumber(i)==1&&isprimenumber(num-i)==1)
		{		
			printf("%d = %d + %d\n",num,i,num-i);
			flag++;
		}

	}
	if(flag==0)
		printf("不可以");
	return 0;

}

int isprimenumber(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	if(i>n/2)
		return 1;
}
