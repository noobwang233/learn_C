#include <stdio.h>
#include <math.h>
int zdgys(int a,int b);

int main()
{
    int num,i;
    printf("����һ������:");    
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
    	if(num%i==0)
    	{
    		printf("��������"); 
			break;
		}
		
	}
	if(i>num/2)
	printf("������"); 
   /* int num,i,j;
    printf("����һ������:");    
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
    	j=zdgys(num,i);
    	if(j!=1)
    	{
    		printf("��������"); 
			break;
		}
		
	}
	if(i==num)
	printf("������"); 
	int i;
    printf("������������:");
    scanf("%d %d",&a,&b);
    if(a>b)
     {        
	    printf("���������%d\n",zdgys(a,b));
		printf("��С��������%d",a*b/zdgys(a,b));        
	 }
    else
    {
        printf("���������%d\n",zdgys(b,a));
		printf("��С��������%d",a*b/zdgys(b,a));         	
	}
 
	 	if(a>b)
		i=a;
		else
		i=b;
		for(i;i<=a*b;i++)
		{
			if(i%b==0&&i%a==0)
			{			
			printf("��С��������%d",i);
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
