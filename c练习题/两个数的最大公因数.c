#include <stdio.h>
void findys(int n);
int main()
{
		int n;
        printf(" ‰»În:");
        scanf("%d",&n);
        findys(n);
        return 0;
}

void findys(int n)
{
	int i;
	for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		printf("%d ",i);
		}
	}
}

