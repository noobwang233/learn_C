#include <stdio.h>
#include <math.h>
int zdgys(int a,int b);

int main()
{
    int num,i;
    printf("输入一个整数:");    
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
    	if(num%i==0)
    	{
    		printf("不是素数"); 
			break;
		}
		
	}
	if(i>num/2)
	printf("是素数"); 
   /* int num,i,j;
    printf("输入一个整数:");    
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
    	j=zdgys(num,i);
    	if(j!=1)
    	{
    		printf("不是素数"); 
			break;
		}
		
	}
	if(i==num)
	printf("是素数"); 
	int i;
    printf("输入两个整数:");
    scanf("%d %d",&a,&b);
    if(a>b)
     {        
	    printf("最大公因数：%d\n",zdgys(a,b));
		printf("最小公倍数：%d",a*b/zdgys(a,b));        
	 }
    else
    {
        printf("最大公因数：%d\n",zdgys(b,a));
		printf("最小公倍数：%d",a*b/zdgys(b,a));         	
	}
 
	 	if(a>b)
		i=a;
		else
		i=b;
		for(i;i<=a*b;i++)
		{
			if(i%b==0&&i%a==0)
			{			
			printf("最小公倍数：%d",i);
			break;
			}
		}
*/
        return 0;
}

int zdgys(int a,int b)
{
	if(b!=0)
	{
		return zdgys(b,a%b);
	}
	else
	return a;
}
