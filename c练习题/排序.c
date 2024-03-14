#include <stdio.h>

void swap(int *a,int *b) //���Q�ɂ�׃��
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
        for (j = i + 1; j < len; j++)     //���Lδ�����Ԫ��
            if (arr[j] < arr[min])    //�ҵ�Ŀǰ��Сֵ
                min = j;    //�o���Сֵ
                
                
                
           swap(&arr[min], &arr[i]);    //�����Q
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
   	
   //ѭ�����֮��leftָ����ߵĶ��Ǳ�midС��   leftָ���Ķ��Ǳ�mid��� 
   	
   	if(arr[left]>=arr[right]&&arr[left]>=arr[end])
   	{   
	   	swap(&arr[left],&arr[end]);  //���һ��ֵ�ŵ��м� 
	}
   	else
   	left++;                          //�ұߵ�ָ��right�����ƶ���ָ��left��֮�غ� 
   	
   	
    //������������ leftָ��ָ��ľ���mid 
   	int i;
    for (i = start; i <=end; i++)
    printf("%d ", arr[i]);
    printf("\n");
   	
   	
   	
   	if (left)//���ǰ�滹���� 
        quick_sort_recursive(arr, start, left - 1);
    if(left!=end)//������滹���� 
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
