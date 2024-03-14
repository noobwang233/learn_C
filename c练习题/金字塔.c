#include <stdio.h>
#include <math.h>
void rt(int n);//数字金字塔
void Rrt(int n);//倒金字塔 
void yhrt(int n);//杨辉三角形
void flydrt(int n);//弗洛伊德三角形
int main()
{
		int num;
		printf("请输入行数：");
		scanf("%d",&num);
		//rt(num);
		yhrt(num);		
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
	int i,j,k;
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

void yhrt(int n)
{
	int yh[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-i;j++)
		printf("  ");	
	    for(j=0;j<n;j++)
	    {
		    if(j==0&&i==0)
		    {		    
			yh[i][j]=1;
		    printf("%4d",yh[i][j]);	
			}
		    else if(i==0)
		    yh[i][j]=0;
	    	else
	    	{
	    		yh[i][j]=yh[i-1][j]+yh[i-1][j-1];
	    		if(yh[i][j]!=0)		
				printf("%4d",yh[i][j]);	
			}
		}
		printf("\n");
	}	
}

void flydrt(int n)
{
	int i,j,k;
	k=0;
	for(i=0;i<n;i++)
	{		
		for(j=0;j<i;j++)//输出n-i-1+n-i个* 
		{
			printf("%4d",++k);
		}
		printf("\n");	
	}
}
