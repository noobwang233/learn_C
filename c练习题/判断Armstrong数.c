#include <stdio.h>
#include <math.h>
void rt(int n);//���ֽ�����
void Rrt(int n);//�������� 

int main()
{
		int num;
		printf("������������");
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
		for(j=0;j<n-i;j++)//���n-i���ո� 
		{
			printf("  ");
		}
		for(k=i;k<=2*i;k++)//��i+1��ʼ����������ֵ�2i+1 
		{ 
			printf("%d ",k+1);
		}
	    for(l=k-1;l>i;l--)//��2i��ʼ����ݼ����ֵ�i+1 
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
		for(k=0;k<=i;k++)//���i��  
		{ 
			printf(" ");
		}		
		for(j=0;j<2*n-2*i-1;j++)//���n-i-1+n-i��* 
		{
			printf("*");
		}
		printf("\n");	
	}
}
