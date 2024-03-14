#include <stdio.h>
#include <math.h>
int findv(int n);
int main()
{
		int num;
		printf("请输入一个数：");
		scanf("%d",&num);
		if(num==findv(num)) 
		printf("是");
		else
		printf("不是");		
        return 0;
}

int findv(int n)
{
	if(n==0)
		return 0;
	else
	{
		int y;
		int h=0;
		while(n!=0)
		{
			y=n%10;
			n=n/10;
			h=10*h+y;
		}
		return h;
	}

}
