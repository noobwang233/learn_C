#include <stdio.h>

int main()
{
    int i, n;
    float arr[100];

    printf("����Ԫ�ظ�����0~100��: ");
    scanf("%d", &n);
    printf("\n");

    // �����û�����
    for(i = 0; i < n; ++i)
    {
       printf("�������� %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    // ѭ�����������Ԫ�ش洢�� arr[0]
    for(i = 1; i < n; ++i)
    {
       // ���Ҫ������Сֵ���Խ� < ���� > 
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("���Ԫ��Ϊ = %.2f", arr[0]);

    return 0;
}
