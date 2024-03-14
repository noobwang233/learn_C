#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define BOAT_SUM    30  /* ���������� */
#define GO_DOWN_SUM 15  /* ��ȥ������ */
#define REPORT_SUM  9   /* ���������� */

static int goDown = 0; /* Ҫ��ȥ���� */
static int numMark[30] = {0}; /* 1:δ�� 0:���� */

/* ���ѭ����ֱ�����Ͻ�ʣ 15 ��Ϊֹ���ʶ�����Щ��ŵ����´����أ� */
int main() 
{
	int i;
    for (i = 0; i < sizeof(numMark) / sizeof(int); i++)
    {
        numMark[i] = 1;
    }
    
    
    
    int sum = 0;
    for (i = 0; i < BOAT_SUM; i++)
    {
        sum += numMark[i];
        if (sum == REPORT_SUM)
        {
            printf("��%d���´���\r\n", i + 1);
            numMark[i] = 0;
            sum = 0;
            goDown++;
            if (goDown == GO_DOWN_SUM) break;
        }
        if (i == BOAT_SUM - 1) i = -1;
    }

    return 0;
}

