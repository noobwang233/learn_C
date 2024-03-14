#include <stdio.h>

void jz();//输出10*10的数字矩阵 

int main()
{
	int n,sum;
	sum=0;
	printf("请输入差值：");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{			
		    sum+=n;
			printf("%4d",sum);			

		}
		printf("\n");
	}    
	return 0;
}

void jz()
{
	int num,i,j;
	num=0;
	//printf("请输入行数：");
	//scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%3d",++num);
		}
		printf("\n");
	}

} 
