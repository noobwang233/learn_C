#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s;

int main()
{
    printf("������Ϣ:\n");

    printf("����: ");
    scanf("%s", s.name);

    printf("���: ");
    scanf("%d", &s.roll);

    printf("�ɼ�: ");
    scanf("%f", &s.marks);


    printf("��ʾ��Ϣ:\n");

    printf("����: ");
    puts(s.name);

    printf("���: %d\n",s.roll);

    printf("�ɼ�: %.1f\n", s.marks);

    return 0;
}
