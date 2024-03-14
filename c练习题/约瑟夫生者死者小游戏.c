#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define BOAT_SUM    30  /* 船上总人数 */
#define GO_DOWN_SUM 15  /* 下去总人数 */
#define REPORT_SUM  9   /* 报数总人数 */

static int goDown = 0; /* 要下去人数 */
static int numMark[30] = {0}; /* 1:未下 0:已下 */

/* 如此循环，直到船上仅剩 15 人为止，问都有哪些编号的人下船了呢？ */
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
            printf("第%d号下船了\r\n", i + 1);
            numMark[i] = 0;
            sum = 0;
            goDown++;
            if (goDown == GO_DOWN_SUM) break;
        }
        if (i == BOAT_SUM - 1) i = -1;
    }

    return 0;
}

