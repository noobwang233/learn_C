#include <stdio.h>

void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len)
{
    int i,j;
 
    for (i = 0 ; i < len - 1 ; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++)     //走訪未排序的元素
            if (arr[j] < arr[min])    //找到目前最小值
                min = j;    //紀錄最小值
                
                
                
           swap(&arr[min], &arr[i]);    //做交換
    }
    for (i = 0; i < len; i++)
    printf("%d ", arr[i]);
}

void bubble_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    for (i = 0; i < len; i++)
    printf("%d ", arr[i]);
}



void quick_sort_recursive(int arr[], int start, int end) {

   if(start>=end)
   return;
   	
	
    
   int mid=arr[end];
   int left=start;
   int right=end-1;
   
   while(left<right)
   {
   	while(arr[left]<mid&&left<right) 
   	left++;
   	while(arr[right]>=mid&&left<right)
   	right--;
	swap(&arr[left],&arr[right]);
   }
   	
   //循环完成之后left指针左边的都是比mid小的   left指针后的都是比mid大的 
   	
   	if(arr[left]>=arr[right]&&arr[left]>=arr[end])
   	{   
	   	swap(&arr[left],&arr[end]);  //最后一个值放到中间 
	}
   	else
   	left++;                          //右边的指针right不动移动左指针left与之重合 
   	
   	
    //做完上述操作 left指针指向的就是mid 
   	int i;
    for (i = start; i <=end; i++)
    printf("%d ", arr[i]);
    printf("\n");
   	
   	
   	
   	if (left)//如果前面还有数 
        quick_sort_recursive(arr, start, left - 1);
    if(left!=end)//如果后面还有数 
    quick_sort_recursive(arr, left + 1, end);
}


void quick_sort(int arr[], int len) {
    quick_sort_recursive(arr, 0, len - 1);
}

int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
	quick_sort(arr,len);

    int i;
    for (i = 0; i < len; i++)
    printf("%d ", arr[i]);
    printf("\n");
   	
    return 0;
}
