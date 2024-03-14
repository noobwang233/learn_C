#include <stdio.h>
#include <math.h>
void rt(int n);//数字金字塔
void Rrt(int n);//倒金字塔 

int main()
{
		int num;
		printf("请输入行数：");
		scanf("%d",&num);
		//rt(num);
		Rrt(num);		
        return 0;
}

void rt(int n)
{
	int i,j,k,l;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)//输出n-i个空格 
		{
			printf("  ");
		}
		for(k=i;k<=2*i;k++)//从i+1开始输出递增数字到2i+1 
		{ 
			printf("%d ",k+1);
		}
	    for(l=k-1;l>i;l--)//从2i开始输出递减数字到i+1 
		{
			printf("%d ",l);
		}
		printf("\n");	
	}
}
void Rrt(int n)
{
	int i,j,k,l;
	for(i=0;i<n;i++)
	{
		for(k=0;k<=i;k++)//输出i个  
		{ 
			printf(" ");
		}		
		for(j=0;j<2*n-2*i-1;j++)//输出n-i-1+n-i个* 
		{
			printf("*");
		}
		printf("\n");	
	}
}
