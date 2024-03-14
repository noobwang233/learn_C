#include <stdio.h>

int main() {
   int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   int even[10], odd[10];
   int i,j,k;
   for(i=k=j=0;i<10;i++)
   {
   	if(array[i]%2==0)
   	{
   		even[j]=array[i];
   		j++;
	}
	else
	{
   		odd[k]=array[i];
   		k++;
	}
   }
   printf(" 原始数组 -> ");
   int loop;
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
 
   printf("\n 偶数 -> ");
   for(loop = 0; loop < j; loop++)
      printf(" %d", even[loop]);  
 
   printf("\n 奇数 -> ");
   for(loop = 0; loop < k; loop++)
      printf(" %d", odd[loop]);

   return 0;
}
