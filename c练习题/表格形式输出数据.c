#include <stdio.h>

void jz();//���10*10�����־��� 

int main()
{
	int n,sum;
	sum=0;
	printf("�������ֵ��");
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
	//printf("������������");
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
