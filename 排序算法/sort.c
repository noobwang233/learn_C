#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printnum(int *num, int len);

void bubblesort(int *num, int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        for(j = 1; j < len - i; j++)
        {
            if( num[j - 1] >= num[j])
            {
                int temp = num[j - 1];
                num[j - 1] =  num[j];
                num[j] = temp;
            }
        }
    }
    
}

void choosesort(int *num, int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        int *min = &num[i];
        for(j = i; j < len ; j++)
        {
            if( num[j] < *min)
                min = &num[j];
        }
        int temp = num[i];
        num[i] = *min;
        *min = temp;
    }
    
}

void insertsort(int *num, int len)
{
    int i, j;
    for (i = 1; i < len; i++)
    {
        int temp = num[i];
        for (j=i;j>0 && num[j-1]>temp;j--)
            num[j] = num[j-1];
        num[j] = temp;
    }
}

int ffsort(int *num, int start ,int end)
{
    if (start == end)
    return 0;
    int left=start+1;
    int right=end;
    int mid=num[start];
    while(left <= right)
    {
        while(num[left++]<=mid);
        while(num[right--]>mid);
        int temp = num[left];
        num[left] = num[right];
        num[right] = temp;
    }

}

void printnum(int *num, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}

int main()
{
    int num[] = {0,10,1,9,2,11,3,8,4,15,5,4,6,3,7};
    int len = sizeof(num)/sizeof(num[0]);
    //bubblesort(num, len);
    //choosesort(num, len);
    insertsort(num, len);
    printnum(num, len);
    return 0;
}