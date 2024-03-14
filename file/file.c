#include <stdio.h>

int main()
{
    FILE *fp;
    int ret;
    fp = fopen("E:/Learning/learn_C/file/file.txt","r");
    if (fp == NULL)
        printf("Open file failed\n");
    else
        printf("Open file successfully\n");

    // int c;
    // c = fgetc(fp);
    // printf("c = %d c = %c\n", c, c);
    // c = fgetc(fp);
    // printf("c = %d c = %c\n", c, c);

    // c = 116;
    // ret = fputc(c, fp);
    // if (ret == EOF)
    //     printf("Write error\n");
    // else
    //     printf("Write %c successfully\n",c);

    char *s;
    s = (char *)malloc(sizeof(char) * 32);
    s = fgets(s, 32, fp);
    printf("s = %s\n", s);
    s = fgets(s, 32, fp);
    printf("s = %s", s);

    // fputs("66666666666666\n", fp); 
    // fputs("nihao", fp); 
    // fputs("nihao", fp); 

    ret = fclose(fp);
    if (ret != 0)
        printf("Close file failed\n");
    else
        printf("Close successfully\n");
    return 0;
}
