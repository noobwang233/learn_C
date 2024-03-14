#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _student
{
    char name[20];
    int age;
    int score;
    int id;
    struct _student *next;
}STU;

void add_student(STU **p_head, STU *p_new)
{
    STU *p_mov = *p_head; //将首个元素的地址赋给p_mov用于遍历所有元素
    if(*p_head == NULL)   //如果链表为空
    {
        *p_head = p_new;  //将当前新增的元素设为第一个元素
        p_new -> next = NULL;
        p_new -> id = 1;
    }
    else
    {
        while (p_mov -> next != NULL)//找到最后一个元素
        {
            p_mov = p_mov -> next;
        }
        p_mov -> next = p_new;
        p_new -> next = NULL;
        p_new -> id = p_mov -> id + 1;
    }
}

void printlist(STU *p_head)
{
    if (p_head == NULL)
    {
        printf("链表为空\n");
    }
    else
    {
        STU *p_mov = p_head;
        while (p_mov != NULL)
        {
            printf("ID:%d 姓名: %s 年龄: %d 分数: %d\n",\
                    p_mov -> id, p_mov -> name, p_mov ->age,\
                    p_mov -> score);
            p_mov = p_mov -> next;
        }
    }
}

void printelement(STU *p_element)
{
    printf("ID:%d 姓名: %s 年龄: %d 分数: %d\n",\
            p_element -> id, p_element -> name, p_element ->age,\
            p_element -> score);
}

void del_list(STU **p_head)
{
    if (*p_head != NULL)
    {
        STU *p_del;
        while (*p_head != NULL)
        {
            p_del = *p_head;
            *p_head = (*p_head) -> next;
            free(p_del);
            p_del = NULL;
        }
    }
}

STU *find_list(STU *p_head,int ID)
{
    STU *p_mov = p_head;
    while(p_mov != NULL)
    {
        if (p_mov->id == ID)
        {
            return p_mov;
        }
        else
            p_mov = p_mov->next;
    }
    return NULL;
}

void del_list_ID(STU **p_head,int ID)
{
    if(*p_head != NULL)
    {
        STU *p_del;
        if ((*p_head) -> id == ID)
        {
            p_del = *p_head;
            *p_head = (*p_head) -> next;
            free(p_del);
            p_del = NULL;
        }
        else
        {
            STU *p_movf = *p_head;
            STU *p_movb = p_movf->next;
            while (p_movb != NULL)
            {
                if (p_movb->id == ID)
                {
                    p_movf->next = p_movb->next;
                    free(p_movb);
                    p_movb = NULL;
                    break;
                }
                p_movf = p_movb;
                p_movb = p_movf->next;
            }
        }
    }
}

void insert_list_ID(STU **p_head,STU *p_new)
{
    if(*p_head != NULL)
    {
        STU *p_mov = *p_head;
        if (p_new->id < p_mov->id)
        {
            p_new->next = p_mov;
            *p_head = p_new;
        }
        else
        {
            while(p_mov->next != NULL)
            {
                if(p_new->id >= p_mov->id && p_new->id < (p_mov->next)->id)
                {
                    p_new->next = p_mov->next;
                    p_mov->next = p_new;
                    break;
                }
            }
            if (p_mov->next == NULL)
            {
                p_mov->next = p_new;
                p_new->next = NULL;
            }
        }
    }
    else
    {
        *p_head = p_new;
        p_new->next = NULL;
    }
}

void sort_list_score(STU **p_head)
{
    if (*p_head == NULL)        //链表为空
    {
        printf("链表为空,不用排序\n");
        return;
    }
    if ((*p_head)->next == NULL)//链表只有一个元素
    {
        printf("只有一个节点，不用排序\n");
        return;
    }
    //选择排序，每次选出最小的放到最前
    STU *p1,*p2,temp;
    p1 = *p_head;
    p2 = (*p_head)->next;
    while (p1 != NULL)
    {
        p2 = p1->next;//第二层循环从p1的下一个开始
        while (p2 != NULL)
        {
            if(p2->score < p1->score)
            {
                //交换数据域，不交换指针域
                temp = *p2;
                *p2 = *p1;
                *p1 = temp;
                //还原指针域
                temp.next = p1->next;
                p1->next = p2->next;
                p2->next = temp.next;
            }
            p2 = p2 -> next;
        }
        p1 = p1->next;
    }
}

void link_reverse(STU **p_head)
{
    STU *p_1,*p_2;
    STU *temp;
    p_1 = *p_head;
    p_2 = p_1->next;
    //从第二个开始。把每个放到链表头部
    while(p_2 != NULL)
    {
        p_1->next = p_2->next;
        p_2->next = *p_head;
        *p_head = p_2;
        p_2 = p_1->next;
    }
}

int main()
{
    STU *p_head = NULL;//保存第一个元素的地址
    STU *new_stu = NULL;
    int n,i;
    printf("请输入创建学生个数\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        new_stu = (STU *)malloc(sizeof(STU));
        if(new_stu != NULL)
        {
            printf("请输入姓名，年龄和分数\n");
            scanf("%s %d %d", new_stu -> name, &(new_stu -> age), &(new_stu -> score));
            add_student(&p_head, new_stu);
            printf("添加成功\n");
            //这里传入p_head的地址是因为一开始链表是空的p_head = NULL
            //插入新的元素之后，p_head ！= NULL
            //如果只传递p_head的值，便不能更新p_head的值了（值传递和地址传递）
            //下次调用p_head还是NULL
        }
        else
        {
            printf("内存申请错误\n");
        }
    }
    printlist(p_head);
    // del_list(&p_head);
    // printlist(p_head);
    STU *p_find = find_list(p_head,2);
    if(p_find != NULL)
        printelement(p_find);
    else
        printf("未找到\n");
    // del_list_ID(&p_head,2);
    // printlist(p_head);
    STU STU_insert = {"wt", 12, 120, 0};
    STU *p_insert = &STU_insert;
    insert_list_ID(&p_head, p_insert);
    printlist(p_head);
    printf("sort_list_score\n");
    sort_list_score(&p_head);
    printlist(p_head);
    link_reverse(&p_head);
    printlist(p_head);
    return 0;
}