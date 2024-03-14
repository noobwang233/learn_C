#include <stdio.h>


int fb(int n);



int main()
{
	int i,num;
	printf("ÇëÊäÈëÊı×Ö£º");
	scanf("%d",&num);
    for(i=1;fb(i)<=num;i++)
    {
    	printf("%d\t",fb(i));
	}
}

int fb(int n)
{
	if(n<=2)
	{ 
	return 1;
	} 
	else
	{
	return fb(n-1)+fb(n-2);
	}
} 
