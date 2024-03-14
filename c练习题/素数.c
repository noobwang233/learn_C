#include <stdio.h>

//int zdgys(int a,int b);
int isprimenumber(int n);
int main()
{
    int num,i;
    printf("输入一个整数:");    
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
    	if(isprimenumber(i))
    	printf("%d ",i);
	}
   /* for(i=2;i<=num/2;i++)
    {
    	if(num%i==0)
    	{
    		printf("不是素数"); 
			break;
		}
		
	}
	if(i>num/2)
	printf("是素数"); 
    int num,i,j;
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
	printf("是素数"); */
        return 0;
}
 
int isprimenumber(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
    {
    	if(n%i==0)
    	{
    		return 0; 
		}
		
	}
	if(i>n/2)
    return 1; 
	
}

 
 /* 
int zdgys(int a,int b)
{
	if(b!=0)
	{
		return zdgys(b,a%b);
	}
	else
	return a;
}*/
