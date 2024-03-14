#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _student
{
    char name[20];
    int age;
    int score;
    int id;
    struct _student *front;
    struct _student *next;
}STU;


